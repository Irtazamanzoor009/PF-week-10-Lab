#include<iostream>
using namespace std;
main()
{
    int sum = 0;
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter number: ";
        cin>>arr[i];
    }
    for(int i=0; i<size; i=i+3)
    {
        int product = arr[i]*arr[i+1]*arr[i+2];
        sum = sum+product;
    }
    cout<<"Sum: "<<sum<<endl;
}