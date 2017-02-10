#include <iostream>
#include <string>
#include <vector>
#include <map>

struct Employee {
    unsigned                             _employeeId;
    std::string                          _employeeName;
};

struct EmployeeData {
    std::vector<Employee>                _employeeData;
};

struct CompanyEmployeeData {
    std::map<std::string,EmployeeData>   _companyEmployeeDataMap;
};

void addEmployeeDetails()
{
    
}

int main()
{
    unsigned choice;
    char answer;

    do {
        std::cout << "   EMPLOYEE DATABASE" << std::endl;
        std::cout << "**********************" << std::endl;
        std::cout << "1  :  Add Employee" << std::endl;
        std::cout << "2  :  View Employee" << std::endl;
        std::cout << "3  :  Exit" << std::endl;
        std::cout << " Enter a choice  : " ;
        std::cin>>choice;
        switch(choice)
        {
        case 1: 

        default: std::cout << "Invalid option" << std::endl;
            break;
                
        }
        std::cout << "Do you want to continue (Y/N) : " << std::endl;
        std::cin >> answer;
    }while(answer=='Y' || answer=='y');

    return 0;
}
