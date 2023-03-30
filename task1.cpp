#include <iostream>
using namespace std;
int checkcondition(string temp, char letter);
main()
{
    int size;
    char letter;
    int sum = 0;
    cout << "Enter the size of string: ";
    cin >> size;
    int count = 0;
    // string arr[size];
    string word[size];
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter word: ";
        cin >> word[i];
    }
    cout << "Enter a letter you want to count: ";
    cin >> letter;
    string temp;
    for (int i = 0; i < size; i++)
    {
        temp = word[i];
        sum = sum + checkcondition(temp, letter);
    }
    cout << "Count: " << sum << endl;
}

int checkcondition(string temp, char letter)
{
    int count = 0;
    int j = 0;
    while (temp[j] != '\0')
    {

        if (temp[j] == letter)
        {
            count++;
        }
        j++;
    }
    return count;
}