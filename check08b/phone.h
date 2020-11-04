/***************
 * phone.h
 ***************/

#include <iostream>

#ifndef PHONE_H
#define PHONE_H


// TODO: Put your phone class definition here...
class Phone
{
    private:

        int areaCode;
        int prefix;
        int suffix;
    
    public:
        //Constructors
        Phone()
        {
            areaCode = 0;
            prefix = 0;
            suffix = 0;
        }
        //Mehtods
        void promptNumber();
        void display();
};

#endif
