
//  Created by Leon Nortje on 2016/02/27.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i, score[6], max[6], total;
    
    cout << "Enter 5 scores:\n";
    cin >> score[0];
    max[0] = 0;
    
    for (i = 1; i < 6; i++)
    {
        cin >> score[i];
        
        if (score[i] > 80 && score[i] < 100)
            max[i] = 4;
        if (score[i] > 70 && score[i] < 79)
            max[i] = 5;
        if (score[i] > 60 && score[i] < 69)
            max[i] = 4;
        if (score[i] > 50 && score[i] < 59)
            max[i] = 3;
        if (score[i] < 50)
            max[i] = 0;
    }
    
    cout << max[0] << endl;
    cout << max[1] << endl;
    cout << max[2] << endl;
    cout << max[3] << endl;
    cout << max[4] << endl;
    cout << max[5] << endl;
    
    total = max[0] + max[1] + max[2] + max[3] + max[4] + max[5];
    
    
    
    
    cout << "Your score is " << total << endl;

    
    return 0;
}
