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
//Required to setw, column width

using namespace std;

void marks_total(ifstream& in_stream, ofstream& out_stream);
//Update marks average and year mark


int main()
{
    
    ifstream fin;
    ofstream fout;
    
    
    fin.open("/Users/leon.nortje/Dropbox/UNISA/Sourcefiles/marks.dat");
    if (fin.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on open file for error.
    
    fout.open("/Users/leon.nortje/Dropbox/UNISA/Sourcefiles/yearmark.dat");
    if (fout.fail())
    {
        cout << "Input file open failed.\n";
        exit(1);
    }
    //Check on writing to file for error.
    
    
    marks_total(fin, fout);
    //Call the function to update content
    
    fin.close();
    fout.close();
    
    cout << "End of editing files.\n";
    
    return 0;
}

void marks_total(ifstream& in_stream, ofstream& out_stream)
//Update average and yearmark
{
    char next;
    {
        in_stream.get(next);
        out_stream.put(next);
    } while (! in_stream.eof());
}
