// Selection and Repetition Projects.cpp : This file contains the Calculator and Merge Files programs.


// Merge Files Program
 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Openning file1 and file2 for reading and output file for writing
    ifstream file1;
    ifstream file2;
    ofstream outputFile;

    file1.open("file1.cpp");
    file2.open("file2.cpp");
    outputFile.open("output.cpp");

    // Declaring line1 and line2 as string
    string line1, line2;

    // Checking if the files are open
    if (file1.is_open() && file2.is_open() && outputFile.is_open()) {
        // read first line
        getline(file1, line1);
        getline(file2, line2);
        // check if both files are still readable
        while (file1 && file2) {
            if (line1 < line2) {
                outputFile << line1 << endl;
                getline(file1, line1);
            }
            else {
                outputFile << line2 << endl;
                getline(file2, line2);
            }
        }

        // writing the remaining lines from file one
        while (file1) {
            outputFile << line1 << endl;
            getline(file1, line1);
        }

        // writing the remaining lines from file two
        while (file2) {
            outputFile << line2 << endl;
            getline(file2, line2);
        }

        // closing files
        file1.close();
        file2.close();
        outputFile.close();
    }
    else {
        cout << "Error: wrong file opened." << endl;
    }

    return 0;
   
}
