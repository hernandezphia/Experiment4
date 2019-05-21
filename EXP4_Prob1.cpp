#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

void displaymenu()
{
    cout << "MENU:" << endl;
    cout << "     1. Add" << endl;
    cout << "     2. Subtract" << endl;
    cout << "     3. Multiply" << endl;
    cout << "     4. Divide" << endl;
    cout << "     5. Modulus" << endl << endl;
}

int A(int a, int b)
{
    return(a+b);
}

int S(int a, int b)
{
    return(a-b);
}

int M(int a, int b)
{
    return(a*b);
}

float D(int a, int b)
{
    return(a/b);
}

int Mod(int a, int b)
{
    return(a%b);
}

int main(int argc, char *argv[])
{
    displaymenu();
    int choice;
    int a;
    int b;
    char cont;
    do
    {
        cout << "Enter your choice (1 to 5): ";
        cin >> choice;
        cout << "Enter your two numbers: ";
        cin >> a >> b;
        cout << endl;
        
        switch(choice)
        {
            case 1:
                cout << "Result: " << A(a,b) << endl;
                break;
                
            case 2:
                cout << "Result: " << S(a,b) << endl;
                break;
                
            case 3:
                cout << "Result: " << M(a,b) << endl;
                break;
                
            case 4:
                cout<< "Result: " << D(a,b) << endl;
                break;
                
            case 5:
                cout << "Result: " << Mod(a,b) << endl;
                break;
                
            default:
                cout << "Invalid operation!" << endl;
        }
        
        cout << "\nPress y to continue operations: ";
        cin >> cont;
        cout << endl;
    
    } while(cont='y');
    system("PAUSE");
    
    _getch();
    return EXIT_SUCCESS;
}
