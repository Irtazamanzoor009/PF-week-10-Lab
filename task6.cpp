#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i< size; i++)
    {
        cout<< arr[i]<<" "<<endl;
    }
}