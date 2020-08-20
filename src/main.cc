#include <iostream>
int main()
{
    int number1{2147483647};
    short int number2{1};
    unsigned int number3{4294967295};
    const unsigned short int number4{4}; // no es modificable no tiene signo y es de 16 bits osea 2 bytes
    long long int number5{6};
    unsigned char char1{254};
    bool option{true};

    std::cout << "int size is: " << sizeof(number1) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1]
    std::cout << "short int size is: " << sizeof(number2) << " bytes" << std::endl;
    //[1][1][0][0] [1][1][0][1] [1][1][0][0] [1][1][0][1] 16 bits (tu super nintendo)
    std::cout << "unsigned int size is: " << sizeof(number4) << " bytes" << std::endl;
    std::cout << "long long int size is: " << sizeof(number5) << " bytes" << std::endl;
    //std::cout << "Hello world";
    std::cout << " float: " << sizeof(float) << " bytes" << std::endl;             //32 bits
    std::cout << " double: " << sizeof(double) << " bytes" << std::endl;           //64 bits
    std::cout << " long double: " << sizeof(long double) << " byte" << std::endl; //96 bits
    std::cout << "char: " << char1 << " " << sizeof(char) << " byte" << std::endl;  //8 bits  
    std::cout << "bool: " << option << " " << sizeof(char) << " byte" << std::endl;  //8 bits           
    std::cin.get();

    return 0;
}