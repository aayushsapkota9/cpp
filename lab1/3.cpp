#include <iostream>
#include <string>
#define MAX 1
using namespace std;
class SubjectMarks
{
private:
    int oop;
    int math;
    int che;
    int am;
    int ct;
    int mw;

public:
    void readMarks()
    {
        cout << "Enter marks for OOP, Math, Chemistry, AM, CT, MW: ";
        cin >> oop >> math >> che >> am >> ct >> mw;
    }

    void displayMarks()
    {
        cout << "OOP: " << oop << ", Math: " << math
             << ", Chemistry: " << che << ", AM: " << am
             << ", CT: " << ct << ", MW: " << mw << endl;
    }
};
class STUDENT : private SubjectMarks
{
private:
    int Roll;
    string Name;
    string Address;

public:
    void read()
    {
        cout << "Enter the roll, name, address";
        cin >> Roll >> Name >> Address;
        SubjectMarks::readMarks();
    }
    void display()
    {
        cout << "\nStudent Details:\n";
        cout << "Roll: " << Roll << ", Name: " << Name << ", Address: " << Address << endl;
        SubjectMarks::displayMarks();
    }
};
int main()
{
    STUDENT s[MAX];
    int i;
    for (i = 0; i < MAX; i++)
    {
        s[i].read();
    }
    for (i = 0; i < MAX; i++)
    {
        s[i].display();
    }
}