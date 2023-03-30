// task 3 without function..........
#include <iostream>
using namespace std;
main()
{
    int size;
    int count = 0;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    cout << "[";
    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {

            cout << arr[i] << " ,";

            count++;
        }
    }
    cout << "]";
    if (count == 0)
    {
        cout << "No number found";
    }
}