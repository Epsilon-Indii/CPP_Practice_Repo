#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class person {
    public:
        void SetName(std::string userName);
        std::string GetName();

    private:
        std::string name;
};

#endif