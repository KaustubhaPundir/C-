#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("country.txt");
    fout << "India ";
    fout << "Nepal ";
    fout << "China ";
    fout.close();

    fout.open("capital.txt");
    fout << "NewDelhi ";
    fout << "Kathmandu ";
    fout << "Beijing ";
    fout.close();
    ifstream fin("country.txt");
    string str;
    while (!fin.eof())
    {
        getline(fin, str);
        cout<<str<<endl;
    }
    fin.close();

    fin.open("capital.txt");
    while (!fin.eof())
    {
        getline(fin, str);
        cout<<str<<endl;
    }
    fin.close();
    return 0;
}
