/***************************************************************
 * File: order.h
 * Author: Will Brown
 * Purpose: Contains the definition of the Order class
 ***************************************************************/

#ifndef ORDER_H
#define ORDER_H
#include "address.h"
#include "customer.h"
#include "product.h"

#include <iostream>
#include <string>


class Order
{
    private:
        Product product;
        int quantity;
        Customer customer;
        

    public:
        //Constructors
        Order();                                                    
        //Default Constructor
        Order(Product product, int quantity, Customer customer);    
        //Non-default Constructor passing 3 parameters

        //Setters
        void setProduct(Product product);
        void setQuantity(int quantity);
        void setCustomer(Customer customer);
        //Getters
        Product getProduct();
        int getQuantity();
        Customer getCustomer();
        std :: string getShippingZip();
        float getTotalPrice();
        
        void displayShippingLabel();
        void displayInformation();
};



#endif
