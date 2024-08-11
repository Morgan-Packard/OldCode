#include <iostream>

int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){

    int first_number {13};
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "sum : " << sum << std::endl;

    sum = addNumbers(25, 7);
    std::cout << "sum : " << sum << std::endl;
    return 0;
}
