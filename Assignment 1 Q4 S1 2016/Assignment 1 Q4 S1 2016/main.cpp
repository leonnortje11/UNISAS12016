//  main.cpp
//  Output
//
//  Created by Leon Nortje on 2016/02/21.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void make_neat(ifstream& messy_file, ofstream& neat_file);
//Stream parameters must be call-by-reference


int main()
{
    
    ifstream fin;
    ofstream fout;
    
    
    
    fin.open("arrest.dat");
    if (fin.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    fout.open("newarrest.dat");
    if (fout.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
    
    make_neat(fin, fout);
    //Call the function to fix the file content
    
    fin.close();
    fout.close();
    
    return 0;
}

void make_neat(ifstream& messy_file, ofstream& neat_file)
//Fix content to new file
{
    
    char next;
    while (messy_file >> next)
    {
        //cout << setw(field_width) << next << endl;
        //Write content to screen
        neat_file << next;
        //Write content to the new file.
    }
}