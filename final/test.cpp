#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee
{
    string name;
    double salary;
};

void writeToFile(int n)
{
    ofstream fout("employees.txt");
    if (!fout)
    {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    Employee e;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); // clear buffer before getline
        getline(cin, e.name);
        cout << "Salary: ";
        cin >> e.salary;

        fout << e.name << "," << e.salary << endl;
    }
    fout.close();
    cout << "\n✅ Data successfully written to file.\n";
}

void readFromFile()
{
    ifstream fin("employees.txt");
    if (!fin)
    {
        cout << "Error opening file for reading!" << endl;
        return;
    }

    string nameFromFile;
    double salaryFromFile;
    cout << "\nEmployees with salary greater than 20000:\n";

    while (getline(fin, nameFromFile, ',') && (fin >> salaryFromFile))
    {
        fin.ignore(); // skip newline
        if (salaryFromFile > 20000)
        {
            cout << "Name: " << nameFromFile << ", Salary: " << salaryFromFile << endl;
        }
    }
    fin.close();
}

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    writeToFile(n); // function to input and save
    readFromFile(); // function to read and display

    return 0;
}