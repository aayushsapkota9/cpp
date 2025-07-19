#include <iostream>
using namespace std;
class EMPLOYEE
{
private:
    int Eid;
    char EName[30];
    char EAddress[30];
    char EPost[30];
    int EBSal;
    int TAX;

public:
    void read()
    {
        std::cout << "Enter the name, address, post, salary and tax";
        std::cin >> EName >> EAddress >> EPost >> EBSal >> TAX;
    }
    void display()
    {
        std::cout << EName << "\t" << EAddress << "\t" << EPost << "\t" << EBSal << "\t" << TAX;
    }
};
int main()
{
    EMPLOYEE Ram, Sita;
    Ram.read();
    Sita.read();
    Ram.display();
    Sita.display();
    return 0;
}