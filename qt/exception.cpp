#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "Enter 1 for int exception, 2 for char exception, anything else for generic: ";
        cin >> choice;

        if (choice == 1)
        {
            throw 100; // int exception
        }
        else if (choice == 2)
        {
            throw 'E'; // char exception
        }
        else
        {
            throw string("Unknown error occurred"); // string exception
        }
    }

    catch (int e)
    {
        cout << "Caught an int exception: " << e << endl;
    }

    catch (char e)
    {
        cout << "Caught a char exception: " << e << endl;
    }

    catch (string e)
    {
        cout << "Caught a string exception: " << e << endl;
    }

    catch (...)
    {
        // Catch-all handler
        cout << "Caught an unknown exception." << endl;
    }

    return 0;
}
