#include<iostream>

int main() {
    int digit1(0), digit2(0), digit3(3), count(0); // инициализираме 3 цифри

    for(int i=100; i<1000; i++) {
        digit1 = (i%100)%10; // цифра на стотиците
        digit2 = (i/10)%10; // цифра на десетиците
        digit3 = (i/100)%10; // цифра на единиците

        if( digit1 == digit2 || digit1 == digit3 || digit2 == digit3 ) { // проверка дали има 2 или повече еднакви
            continue; // ако има => пропускаме
        }

        std::cout<<i<<" "; // отпечатваме числото
        count++;
    }

    std::cout<<std::endl<<"There are "<<count<<" numbers displayed!"<<std::endl;
    return 0;
}