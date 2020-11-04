/*****************************************************
 * File: pair.h
 *
 * Purpose: Defines a Pair template class that can hold
 *   two items of arbitrary data types.
 ******************************************************/

#ifndef PAIR_H
#define PAIR_H

#include <iostream>
#include <string>


// TODO: Fill in this class
// Put all of your method bodies right in this file
template<class T1, class T2> class Pair
{
    private:

        T1 value;
        T2 svalue;

        //I svalue;

    public:

        Pair() { }
        ~Pair() { }

        void setFirst(T1 value) { this->value = value; }
        void setSecond(T2 svalue) { this->svalue = svalue; }
        T1 getFirst() { return value; }
        T2 getSecond() { return svalue; }

        void display() { std::cout << getFirst() << " - " << getSecond(); }
};

#endif // PAIR_H
