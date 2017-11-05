#include<iostream>

int main() {
    int n(0), count(0), sum(0); // инициализираме число, брояч и сума

    std::cout<<"Please input series of numbers between 1 and 200 inclusive : "<<std::endl;

    while ( true ) {
        std::cin>>n;
        if( n > 200 ) { // проверка дали числото е в нужния интервал
            std::cout<<n<<" is invalid number!";
            continue;
        }
        if ( n < 0 ) { // проверка дали е по-малко от нула(ако е по-малко, спираме вкарването на числа)
            std::cout<<"You have ended the input!"<<std::endl;
            break;
        }
        sum+= n;
        count++;
    }

    // отпечатваме сумата, броя и ср. аритметично
    std::cout<<"The sum is: "<<sum<<std::endl;
    std::cout<<"The count is: "<<count<<std::endl;
    std::cout<<"The average is: "<<sum/count<<std::endl;
    
    return 0;
}