#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int s = 0;
    for(int i=1 ; i<=size ; i++)
        s = s + arr[i];
    cout << "Sum = " << s;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for(int i=1 ; i<=size ; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    return sum(arr,size);
}
