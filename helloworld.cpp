#include <iostream>

int main(){

    //this is a comment
    int age = 21;
    int year = 2034;
    int days = 7.5;

    // single character

    char initial = 'a';
    char grade = 'B';

    // boolean
    bool student = false;

    // string
    std::string name = "Lawal Ameh";
    std::cout << "I like Pizza" << '\n';
    std::cout << "It is really good" << '\n';


    std:: cout << "Hello " << name << '\n';
    std:: cout << "you are " << age << '\n';

    // const
    const double pi = 3.141;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std:: cout << circumference << '\n';
    return 0;
}
