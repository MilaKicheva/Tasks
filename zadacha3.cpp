#include<iostream>
#include<string>
#include<math.h>

int main() {
    /*
    //Po tozi nachin chisloto ne e limitirano ot wuzmojnata duljina na int, long unsigned int etc.
    // Напомни ми да ти обясня кое е различното
    std::string num;
    std::cout<<"Please input a natural number: ";
    std::cin>>num;
    
    for( int i=0; i < num.length(); i++)
    {
        if( !isdigit(num[i]))
        {
            std::cout<<num[i]<<" this is not a digit! The programme is terminated"<<std::endl;
            return 0;
        }
    }
    std::cout<<std::endl<<num<<" has: "<<num.length()<<" digit(s)."<<std::endl;
    
    return 0;


    */

    int num(0), count(0), pow(10); // инициализираме число, брояч и множител
    std::cout<<"Please input a natural number: ";
    std::cin>>num;

    while (true) {
        count++;
        if( num%pow == num) // делим с остатък числото на множителя(когато остатакът е равен на числото, означава, че делителят е вече твърде голям и спираме деленето)
            break;
        pow*= 10;
    }
    // изкарваме колко цифри има
    std::cout<<std::endl<<num<<" has: "<<count<<" digit(s)."<<std::endl;    

    return 0;
}