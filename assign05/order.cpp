/***************************************************************
 * File: order.cpp
 * Author: Will Brown
 * Purpose: Contains the method implementations for the Order class.
 ***************************************************************/

#include "order.h"
#include "customer.h"
#include "address.h"
#include "product.h"
#include <string>
#include <iostream>



// Put your the method bodies for your order class here
/******************************************************
 * CONSTRUCTORS
 * ****************************************************/
Order :: Order ()
    : quantity(0)
{
    
} 

Order :: Order(Product product, int quantity, Customer customer)
    : product(product), quantity(quantity), customer(customer)
{

}

/******************************************************
 * SETTERS
 * ****************************************************/
void Order :: setProduct(Product product)
{
    this->product = product;
    
}
void Order :: setQuantity(int quantity)
{
    this->quantity = quantity;
}
void Order :: setCustomer(Customer customer)
{
    this->customer = customer;
}
/******************************************************
 * GETTERS
 * ****************************************************/
Product Order :: getProduct()
{ 
    return product; 
}
int Order :: getQuantity()
{ 
    return quantity; 
}

Customer Order :: getCustomer()
{
    return customer; 
}

std :: string Order :: getShippingZip()
{ 
    return customer.getAddress().getZip(); 
}

float Order :: getTotalPrice()
{ 
    return (float)quantity * product.getTotalPrice(); 
}

/******************************************************
 * DISPLAY
 * ****************************************************/
void Order :: displayShippingLabel()
{
    customer.display();
    
}

void Order :: displayInformation()
{
    std :: cout.setf(std :: ios::fixed);
    std :: cout.setf(std :: ios::showpoint);
    std :: cout.precision(2);

    std :: cout << customer.getName() << std :: endl;
    std :: cout << product.getName() << std :: endl;
    std :: cout << "Total Price: " << "$" << getTotalPrice() << std :: endl;
}