//
//  main.cpp
//  Assigment 1 Q1 S1 2016
//
//  Created by Leon Nortje on 2016/02/20.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <iostream>
using namespace std;

double calculated_dicount(double total_bill_amount, double discount_percentage);

double calculated_discount(double total_bill_amount, double discount_percentage, int thursday_discount);

int main()
{
    double total_bill_amount;
    int discount_percentage = 0;
    char status;
    
    cout << "Please enter bill amount: ";
    cin >> total_bill_amount;
    
    cout << "Please enter your membership status: ";
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
    
            cout << discount_percentage;
            
    }

    
    
    cout << endl;
    
    return 0;
}
