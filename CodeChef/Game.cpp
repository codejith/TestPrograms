#include <iostream>
int main()
{
    int pOnelead=0, pTwoLead = 0, scoreOne, scoreTwo, limit;
    std::cin >> limit;
    while(limit--)
    {
        std::cin >> scoreOne >> scoreTwo;
        if (scoreOne > scoreTwo)
        {
            if ((scoreOne-scoreTwo) > pOnelead)
            {
                pOnelead = (scoreOne - scoreTwo);
                
            }
        }
        else if (scoreTwo > scoreOne)
        {
            if ((scoreTwo-scoreOne) > pTwoLead)
            {
                pTwoLead = (scoreTwo - scoreOne);
            } 
        }
        
    }
    
    if (pOnelead > pTwoLead)
    {
        std::cout << "1 " << pOnelead <<std::endl;
    }
    else
    {
        std::cout << "2 " << pTwoLead <<std::endl;
    }

    return 0;
}
