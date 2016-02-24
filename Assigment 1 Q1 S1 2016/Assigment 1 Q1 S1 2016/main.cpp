//  File Name: main.cpp
//  Created by Leon Nortje
//  Email Address: nortje.leon@gmail.com
//  Copyright (c) 2014 Leon Nortje. All rights reserved.
//  Description: calculate total discount based on a specific membership status and or Thursday selection discoint

#include <iostream>
using namespace std;

double calculated_dicount(double total_bill_amount, double discount_percentage);
//Calculate total discount for none Thursday.

double calculated_discount(double total_bill_amount, double discount_percentage, int thursday_discount);
//Calculate total discount if user selects Thursday and nominated discount.

int main()
{
    double total_bill_amount, total_discount;
    int discount_percentage = 0, thursday_discount;
    char status, answer;
    
    cout << "Please enter bill amount: ";
    cin >> total_bill_amount;
    
    cout << "Please enter your membership status:\n"
        << "S = Silver 5%\n"
        << "G = Gold 10%\n"
        << "P = Platinum 15%\n"
        << "Selection: ";
    
    cin >> status;
    
    switch (status)
    {
            case 'S':
            cout << "You have selected Silver status: 5%\n";
            discount_percentage = 5;
            break;
            
            case 'G':
            cout << "You have selected Gold status: 10%\n";
            discount_percentage = 10;
            break;
            
            case 'P':
            cout << "You have selected Platinum status: 15%\n";
            discount_percentage = 15;
            break;
            
        default:
            cout << "Selection not posible:";
    
            
    }
    
  //  cout << discount_percentage;

    cout << "Is it Thursday?: ";
    cin >> answer;
    
    if (answer == 'Y')
    {
        cout << "Please choose discount percentage 5% or 10%: ";
        cin >> thursday_discount;
        cout << "You have selected " << thursday_discount << "%\n";
        
        total_discount = calculated_discount(total_bill_amount, discount_percentage, thursday_discount);
        cout << total_discount;
        cout << endl;
    }

else
{
    total_discount = calculated_dicount(total_bill_amount, discount_percentage);
    cout << total_discount;
    cout << endl;
}
    
    
    return 0;
}

double calculated_dicount(double total_bill_amount, double discount_percentage)
//Non Thursday selection.
{
    
    double total;
    
    total = total_bill_amount - (discount_percentage/100)*total_bill_amount;
    return (total);
    
}

double calculated_discount(double total_bill_amount, double discount_percentage, int thursday_discount)
//Discount calculation based on a Thursday selection.
{
    double total2, total_percentage_discount;
    
    total_percentage_discount = discount_percentage + thursday_discount;

    total2 = total_bill_amount - (total_percentage_discount/100)*total_bill_amount;
    
    return (total2);
    
}

