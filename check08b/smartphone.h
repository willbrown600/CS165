/****************
 * smartphone.h
 ****************/

#include <string>

#include "phone.h"

#ifndef SMARTPHONE_H
#define SMARTPHONE_H

// TODO: Put your SmartPhone definition here
class SmartPhone : public Phone
{
    private:
        
        std::string email;
    
    public:

        SmartPhone()
        {
            email = "";
        }

        void prompt();
        void display();

};
#endif
