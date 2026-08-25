// #include <iostream>
// #include <ios>
// int main(){
//     int a {};
//     double b {};
//     std::cout<<"Enter a value for a and b :- ";
//     std::cin>>a;
//     std::cin.ignore();
//     std::cin>>b;
//     std::cout<<static_cast<double>(a)<<"Here goes b"<<static_cast<int>(b);
//     return 0;
// }
#include <iostream>
int main(){
    std::cin >> std::boolalpha;
    int age {};
    bool hasIdCard {};
    bool isBanned {};
    bool hasPermission {};
    std::cout << "Enter your age :- ";
    std::cin >> age;
    std::cout << "DO you have a ID card (True/False):- ";
    std::cin >> hasIdCard;
    std::cout << "Are you banned (True/False):- ";
    std::cin >> isBanned;
    std::cout << "Do you have permission (True /False) :- ";
    std::cin >> hasPermission;
    if ((age >=18 || hasPermission == 1)&& isBanned == 0){
        std::cout<< "Permission Granted "<<std::endl;
    }
    else {
        std::cout << "Permission denied "<<std::endl;
    }

    return 0;
}
