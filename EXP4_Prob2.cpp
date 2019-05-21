#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int size, arr[50], i, j, temp;
    cout << "Selection Sorting..." << endl;
    cout << "Enter the array size: ";
    cin >> size;
    cout << "Enter the " << size << " elements: " << endl << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << endl;
    
    cout << "Your data: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << endl;
    
    cout << "After using selection sort..." << endl << endl;
    
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "Sorted data: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << endl;
    _getch();
    return 0;
}
