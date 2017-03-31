#include <iostream>
int main()
{
    int pOnelead=0, pTwoLead = 0, pOneTotalScore = 0, pTwoTotalScore = 0, scoreOne, scoreTwo, limit;
    std::cin >> limit;
    while(limit--)
    {
        std::cin >> scoreOne >> scoreTwo;
        pOneTotalScore += scoreOne;
        pTwoTotalScore += scoreTwo;
        
        if (pOneTotalScore > pTwoTotalScore)
        {
            if ((pOneTotalScore - pTwoTotalScore) > pOnelead)
            {
                pOnelead = (pOneTotalScore - pTwoTotalScore);
                
            }
        }
        else if (pTwoTotalScore > pOneTotalScore)
        {
            if ((pTwoTotalScore-pOneTotalScore) > pTwoLead)
            {
                pTwoLead = (pTwoTotalScore - pOneTotalScore);
            } 
        }
        
    }
    
    if (pOnelead > pTwoLead)
    {
        std::cout << "1 " << pOnelead << std::endl;
    }
    else
    {
        std::cout << "2 " << pTwoLead << std::endl;
    }

    return 0;
}
