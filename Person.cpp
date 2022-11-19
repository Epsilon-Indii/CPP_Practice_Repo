#include <string>
#include "Person.h"

void person::SetName(std::string userName) {
    this->name = userName;
}

std::string person::GetName() {
    return this->name;
}