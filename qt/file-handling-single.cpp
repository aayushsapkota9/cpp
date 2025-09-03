#include <iostream>
#include <fstream>
#define MAX 2
using namespace std;
class Student
{
private:
    char name[40], address[40];
    int roll;

public:
    void show()
    {
        cout << "Name: " << name;
        cout << "\tAddress: " << address;
        cout << "\tRoll: " << roll << endl;
    }
    void get()
    {
        cout << "Enter name addrress and roll" << endl;
        cin >> name >> address >> roll;
    }
};
int main()
{
    Student s;
    Student loaded;
    s.get();
    ofstream outFile("students1.txt", ios::binary);
    if (!outFile.is_open())
    {
        cout << "Error opening file";
        return 1;
    }
    outFile.write(reinterpret_cast<char *>(&s), sizeof(s));
    outFile.close();

    // writing completed
    ifstream inFile("students.txt", ios::binary);
    if (!inFile.is_open())
    {
        cout << "Error opening file";
        return 1;
    }
    inFile.read(reinterpret_cast<char *>(&loaded), sizeof(loaded));
    inFile.close();

    loaded.show();

    return 0;
}