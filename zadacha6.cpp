#include<iostream>

int main() {
    int num(0), sum(0); // инициализираме число и празна сума

    std::cout<<"Input a number between 10 and 99 inclusive: ";
    std::cin>>num;

    while( num < 10 || num > 99) { // проверка дали числото е в интервала
        std::cout<<std::endl<<"Invalid number! Try again: ";
        std::cin>>num;
    }

    for( int i=10; i<num; i++ ) { // събираме всички числа от 10 до п
        sum+= i;
    }

    std::cout<<"The sum of the numbers is: "<<sum<<std::endl; // отпечатваме сумата

    return 0;
}