
//  Copyright © 2016 Leon Nortje. All rights reserved.
//  Change characteristics of input file

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void make_neat(ifstream& messy_file, ofstream& neat_file);
//Stream parameters must be call-by-reference


int main()
{
    
    char in_file_name[16], out_file_name[16];
    
    ifstream fin;
    ofstream fout;
    
    cout << "Enter the input file name (max 15 characters):\n";
    cin >> in_file_name;
    
    cout << "Enter the output file name (Max 15 characters):\n";
    cin >> out_file_name;
    
    
    fin.open(in_file_name);
    if (fin.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    fout.open(out_file_name);
    if (fout.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
    
    make_neat(fin, fout);
    //Call the function to change the file content
    
    fin.close();
    fout.close();
    
    return 0;
}

void make_neat(ifstream& messy_file, ofstream& neat_file)
//Change the file content
{
    
    char next;
    while (messy_file.get(next))
    {
        
        if (next == '0')
            next = '@';
        if  (next== '1')
            next = '!';
        if (next == '2')
            next = ')';
        if (next == '3')
            next = 'E';
        if (next == '4')
            next = '<';
        if (next == '5')
            next = '&';
        if (next == '6')
            next = '$';
        if (next == '7')
            next = '>';
        if (next == '8')
            next = '*';
        if (next == '9')
            next = '?';
        if (next == 'e')
            next = 'h';
        if (next == ' ')
            next = '-';
        if (isupper(next))
            next = ' ';
            neat_file.put(next);
        
        cout << next;
        //Display info on screen.
        
    }
}