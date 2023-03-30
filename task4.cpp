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
    int cycle;
    cout << "Enter repeating cycle: ";
    cin >> cycle;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == arr[i + cycle])
        {
            count++;
        }
        if (cycle == count)
        {
            break;
        }
    }
    cout<<"Count: "<<count<<endl;
    cout<<"cycle: "<<cycle<<endl;
    if (cycle >= size )
    {
        cout << "True";
    }
    else
    {
        if (count == cycle || size == cycle+1)
        {
            cout << "true";
        }
        else
        {

            cout << "False";
        }
    }
}