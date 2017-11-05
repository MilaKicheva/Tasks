#include <iostream>

int main() {
    std::cout<<"Input a natural number: ";

    int num(0); // инициализираме числото
    std::cin>>num;

    if( num == 1 ) { // проверка дали е 1
        std::cout<<"1 can be divided only by itself"<<std::endl;
        return 0;
    }

    while ( num < 1) { // проверка дали е естествено
        std::cout<<std::endl<<"It must be a natural number! Try again: ";
        std::cin>>num;
    }

    std::cout<<"The divisors are: ";
    for(int i=1; i<=num; i++) {
        if (num % i == 0) // ако се дели на i без да има остатък => i e делител
        std::cout<<i<<" ";
    }

    std::cout<<std::endl;

    return 0;
}