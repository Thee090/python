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
    Infile.open(filename.c_str(), ios_base::in);

    if (Infile.is_open())
    {
        string word;
        char w;
        int sentences = 0;
        int wordcount = 1;

        while (Infile.get(w))
        {
            if (w == '.' || w == '?' || w == '!')
            {
                sentences++;
            }
            else if (w == ' ' || w == '\n' || w == '\t')
            {
                wordcount++;
            }
        }
        Infile.close();

        cout << "Sentences: " << sentences << endl;
        cout << "Word count: " << wordcount << endl;

    }
    else
    {
        cout << "Not file\t" << filename << endl;
    }
    return 0;
}