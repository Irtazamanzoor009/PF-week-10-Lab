#include<iostream>
using namespace std;
main()
{
    int size;
    int count = 0;
    cout<<"Enter size of array: ";
    cin>>size;
    int mile[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter number of kilometers: ";
        cin>>mile[i];
    }
    int compare = mile[0];
    for(int i=0; i<size; i++)
    {
       
        if(compare < mile[i+1])
        {
            count = count + 1;
        }
            compare = mile[i];
        
    }
    cout<<"No. of progress days: "<<count<<endl;
}