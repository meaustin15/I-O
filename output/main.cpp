#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("Sample.txt");

    cout << "now writing to the file";

    outputFile << "Matt\n";
    outputFile << "Ahmed\n";
    outputFile << "Sally\n";

    cout << "done writing to the file";

    outputFile.close();

    return 0;
}
