//  File Name: main.cpp
//  Created by Leon Nortje
//  Email Address: nortje.leon@gmail.com
//  Copyright (c) 2014 Leon Nortje. All rights reserved.
//  Description: Calculate APS score for BSc admission

#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int i, score[3], max[3], score2[3], max2[3], total;
    
    cout << "Enter first 3 scores of Englisg, Matchematics & Physical Science:\n";
    cin >> score[0];
    max[0] = 0;
    
    if (score[0] >= 80 && score[0] <= 100)
        max[0] = 6;
    if (score[0] >= 70 && score[0] <= 79)
        max[0] = 5;
    if (score[0] >= 60 && score[0] <= 69)
        max[0] = 4;
    if (score[0] >= 50 && score[0] <= 59)
        max[0] = 3;
    if (score[0] < 50)
        max[0] = 0;
    assert(max[0] >= 4);
    
    for (i = 1; i < 3; i++)
    {
        cin >> score[i];
        
        if (score[i] >= 80 && score[i] <= 100)
            max[i] = 6;
        if (score[i] >= 70 && score[i] <= 79)
            max[i] = 5;
        if (score[i] >= 60 && score[i] <= 69)
            max[i] = 4;
        if (score[i] >= 50 && score[i] <= 59)
            max[i] = 3;
        if (score[i] < 50)
            max[i] = 0;
        assert(max[i] >= 4);
    }
    
    cout << "You have the required scores for English, Mathematics & Physical Science.\n"
        << "Please enter the scores for the last three subjects:\n";

    cin >> score2[0];
    max2[0] = 0;
    
    if (score2[0] >= 80 && score2[0] <= 100)
        max2[0] = 6;
    if (score2[0] >= 70 && score2[0] <= 79)
        max2[0] = 5;
    if (score2[0] >= 60 && score2[0] <= 69)
        max2[0] = 4;
    if (score2[0] >= 50 && score2[0] <= 59)
        max2[0] = 3;
    if (score2[0] < 50)
        max2[0] = 0;
    assert(score2[i] >= 0 && score2[1] <=100);
    
    for (i = 1; i < 3; i++)
    {
        cin >> score2[i];
        
        if (score2[i] >= 80 && score2[i] <= 100)
            max2[i] = 6;
        if (score2[i] >= 70 && score2[i] <= 79)
            max2[i] = 5;
        if (score2[i] >= 60 && score2[i] <= 69)
            max2[i] = 4;
        if (score2[i] >= 50 && score2[i] <= 59)
            max2[i] = 3;
        if (score2[i] < 50)
            max2[i] = 0;
        assert(score2[i] >= 0 && score2[1] <=100);
    }

    
    total = max[0] + max[1] + max[2] + max2[0] + max2[1] + max2[2];
    
    
    cout << "Your APS score is " << total << endl;
    
    if ((total >= 28))
        cout << "You application for BSc in computer Science was successfull.\n";
    else
        cout << "You application for BSc in computer Science was NOT successfull.\n";

    
    return 0;
}
