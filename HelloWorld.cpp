#include <iostream>
#include <string>
#include "Person.h"

int main() {

    person personObj;
    std::string userInput;

    std::cout << "input person's name:" << std::endl;
    std::cin >> userInput;
    personObj.SetName(userInput);

    std::cout << "Person's name is: " << personObj.GetName() << "!" << std::endl;

    return 0;
}