#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    string filename;
    ifstream Infile;
    ofstream Outfile;
    
    cout << "Enter file name : ";
    cin >> filename;
    cout << endl;
    Infile.open(filename.c_str(),ios_base::in);

    if(Infile.is_open()) 
    {    
        string text;
        int num=0;
        cout << "open file success." << endl;
        while (Infile >> text)
        {
            cout << text <<endl;
            num++;
            if (num==24)
            {
                system("pause");
            }
        }
        Infile.close();
    }
    else
    {
        cout << "Not file\t"<< filename << endl;
    }
}