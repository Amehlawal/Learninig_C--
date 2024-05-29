#include <iostream>
#include <cmath>
#include <math.h>

int main(){
    int students = 20;

    // students++;
    // students += 1;
    // students *= 3;
    // students/= 3;
    // std:: cout << students << std::endl;

    // std::string name;
    
    // std::cout << "Enter your name: ";
    // std::cin >> name;

    // std::cout << "Hello " << name << std::endl;

    // int age;

    // std::cout << "Enter your age: ";
    // std::cin >> age;
    // std::cout << "You are " << age << " years old" << std::endl;
    double a;
    double b;
    double c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "c = " << c << std::endl;
    return 0;
}
