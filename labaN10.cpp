#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    string filename = "C:\\programming\\numbers1.txt";
    ifstream file(filename);

    if (!file.is_open()) 
    {
        cerr << "Error: file could not be opened " << filename << endl;
        return 1;
    }

    vector<int> numbers;
    int number;

    while (file >> number) 
    {
        numbers.push_back(number);
    }

    if (file.eof()) 
    {
        cout << "Reading completed successfully." << endl;
    } 
    else if (file.fail()) 
    {
        cerr << "Error: Incorrect data format in the file." << endl;
    }

    file.close();

    if (!numbers.empty()) 
    {
        cout << "Read numbers from a file:" << endl;
        for (int num : numbers) 
        {
            cout << num << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "The file does not contain numbers or the data is incorrect." << endl;
    }

    return 0;
}
