#include <iostream>

int main() {
    int num(0), count(0); // инициализираме числото 
    std::cout<<"Please input a number: ";
    std::cin>>num;

    while ( num<10 || num>200) { // проверка дали е в интервала
        std::cout<<std::endl<<"Invalid number! Try again: ";
        std::cin>>num;
    }

    for(int i=num; i>0; i--) { // започваме от самото число до 0 и проверяваме дали се дели на 7 без остатък
        if(i%7 == 0) {
            std::cout<<i<<" "; // отпечатваме кратните на 7 числа
            count++;
        }
    }

    std::cout<<std::endl<<count<<" numbers can be divided by 7."<<std::endl;
    return 0;
}