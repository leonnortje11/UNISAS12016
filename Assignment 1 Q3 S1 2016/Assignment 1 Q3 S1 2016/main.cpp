//  main.cpp
//  Output
//
//  Created by Leon Nortje on 2016/02/21.
//  Copyright © 2016 Leon Nortje. All rights reserved.
//

#include <fstream>
//For file I/O
#include <iostream>
//For cout
#include <cstdlib>
//For exit
#include <iomanip>
//Required to setw, column width

using namespace std;

void add_plus_plus(ifstream& in_stream, ofstream& out_stream);
//Stream parameters must be call-by-reference and replace C with C++


int main()
{
    
    ifstream fin;
    ofstream fout;
    
    cout << "Befin editing files.\n";
    
    fin.open("cad.dat");
    if (fin.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    fout.open("cplusad.dat");
    if (fout.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
    
    add_plus_plus(fin, fout);
    //Call the function to fix the file content
    
    fin.close();
    fout.close();
    
    cout << "End of editing files.\n";
    
    return 0;
}

void add_plus_plus(ifstream& in_stream, ofstream& out_stream)
//Replace C with C++
{
    char next;
    
    in_stream.get(next);
    
    while (! in_stream.eof())
    {
        if (next == 'C')
            out_stream << "C++";
        else
            out_stream << next;
        
        in_stream.get(next);
    }
}
