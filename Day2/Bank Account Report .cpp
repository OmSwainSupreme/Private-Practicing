#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
int main()
{
    std::string AccountHolderName{};
    double Balance{};
    long long int AccountNumber{};
    double Profit_Loss{};
    int no_of_Conversions{};


    std::cout << "Enter your Name :- ";
    std::getline(std::cin,AccountHolderName);

    std::cout << "Enter the balance you have in you account :- ";
    std::cin >> Balance;

    std::cout << "Enter the Account number :- ";
    std::cin >> AccountNumber;
    
    std::cout << "Enter the Profit/Loss :- ";
    std::cin >> Profit_Loss;
    
    std::cout << "Enter the no of conversions :- ";
    std::cin >> no_of_Conversions; 
    std::cout<<std::endl;

    std::cout << std::setfill('=') <<std::setw(40) << "" <<std::endl;
    std::cout << "      Bank Account Report " << std::endl;
    std::cout << std::setfill('=') <<std::setw(40) << "" <<std::endl;
    
    std::cout << "Account Holder : " << AccountHolderName << std::endl;

    std::cout << "Account Number : " << AccountNumber << std::endl;

    std::cout << "Balance : " << std::showpos << std::showpoint << "Rupees" <<Balance << std::endl;

    std::cout << "Profit/Loss : " << std::showpos << std::showpoint <<Profit_Loss << std::endl;
    

    std::cout << std::setfill ('-') << std::setw(40) << "" << std::endl;
    
    std::cout << "Number System Converion" << std::endl;

    std::cout << "Decimal = " << std::dec <<no_of_Conversions << std::endl;

    std::cout << "Hexadecimal = " << std::hex <<no_of_Conversions << std::endl;

    std::cout << "Octal = " << std::oct <<no_of_Conversions << std::endl;

    
    std::cout << std::setfill('-') << std::setw(40) << "" <<std::endl;
    
    std::cout << "Financial Values" << std::endl; 

    std::cout << "Fixed = " << std::fixed << Balance << std::endl; 

    std::cout << "Scientific = " << std::scientific << Balance << std::endl; 

    std::cout << std::setfill('=') <<std::setw(40) << "" <<std::endl;

    return 0;
}