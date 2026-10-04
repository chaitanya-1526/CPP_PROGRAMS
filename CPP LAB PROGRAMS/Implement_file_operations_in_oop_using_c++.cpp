#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileOperations
{
public:
    void writeFile()
    {
        ofstream file("student.txt");

        if (!file)
        {
            cout << "File could not be opened." << endl;
            return;
        }

        file << "Name: Revathi" << endl;
        file << "Course: Data Science" << endl;
        file << "Year: 2" << endl;

        file.close();

        cout << "Data written to file successfully." << endl;
    }

    void readFile()
    {
        ifstream file("student.txt");
        string line;

        if (!file)
        {
            cout << "File could not be opened." << endl;
            return;
        }

        cout << "\nData read from file:" << endl;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
};

int main()
{
    FileOperations obj;

    obj.writeFile();
    obj.readFile();

    return 0;
}
