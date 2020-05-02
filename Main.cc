#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **args)
{
    string inputPath = args[1];
    ifstream inputFile(inputPath);
    string line;
    if (inputFile.is_open())
    {
        
        // while (getline(inputFile, line))
        // {
        //     cout << line << endl;
        // }
    }
    else
    {
        cout << "Unable to read file: " << inputPath << endl;
    }

    inputFile.close();
}
