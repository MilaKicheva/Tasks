# Task1.cpp
#include<iostream>

int main() {
    int n(0); // инициализираме числото

    std::cout<<"Please input a number: "<<std::endl;
    std::cin>>n;

    std::cout<<"Please input "<<n<<" numbers between 10 and 5555: "<<std::endl;
    int sum(0), num(0);
    for(int i=0; i<n; i++) { // вкарваме п на брой числа
        std::cin>>num;
        while (num < 10 || num > 5555)
            {
                std::cout<<num<<" is invalid number!"<<std::endl; // проверка дали числото е в дадения интервал
                std::cin>>num;
            }
            sum+= num; // добавяме новото число към сумата
    }
    std::cout<<std::endl<<"The sum of all the numbers is: "<<sum<<std::endl;
    return 0;
}
