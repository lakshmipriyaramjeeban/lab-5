#include <iostream>
using namespace std;

int sor(int arr[], int size,int k)
{
  for(int i=1 ; i<size ; i++)
  {
      if(arr[i]>arr[i+1])
        arr[i+1] = arr[i];
  }
}

int ma(int arr[], int size, int k)
{
    sor(arr,size,k);
    cout << k << "\nth Largest element = " << arr[size-k];
}

int mi(int arr[], int size, int k)
{
    sor(arr,size,k);
    cout << "\nSmallest element = " << arr[k];
}

int main()
{
    int size,k;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter element to be shown: ";
    cin >> k;
    int arr[size];
    for(int i=1 ; i<=size ; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
     ma(arr,size,k);
     mi(arr,size,k);
     sor(arr,size,k);
}
