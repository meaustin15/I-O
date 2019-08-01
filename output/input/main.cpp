#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;
    inputFile.open("Sample.txt");


    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    inputFile >> name;
    cout << name << endl;
    cout <<"done reading file";

    inputFile.close();

    return 0;
}

