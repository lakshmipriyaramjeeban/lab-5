#include <iostream>
using namespace std;

int ma(int arr[], int size)
{
    for(int j=2 ; j<=size ; j++)
    {
        if(arr[1]<arr[j])
            arr[1] = arr[j];
    }
    cout << "Largest element = " << arr[1];
}

int mi(int arr[], int size)
{
    for(int j=2 ; j<=size ; j++)
    {
        if(arr[1]>arr[j])
            arr[1] = arr[j];
    }
    cout << "\nSmallest element = " << arr[1];
}

float mean(int arr[], int size)
{
    float s = 0;
    for(int j=1 ; j<=size ; j++)
        s = s + arr[j];
    cout << "\nMean = " << ((float)(s/size));
}

int sor(int arr[], int size)
{
  for(int i=1 ; i<size ; i++)
  {
      if(arr[i]>arr[i+1])
        arr[i+1] = arr[i];
  }
}

float median(int arr[], int size)
{
  sor(arr,size);
  if(size%2==0)
    cout << "\nMedian = " << (((float)(arr[size/2] + arr[(size/2)+1])/2));
  else
    cout << "\nMedian = " << arr[(size+1)/2];
}

int mode(int arr[], int size)
{
    sor(arr,size);
    int maxfreq=0,freq=1,elm;
	for(int i=0; i<=(size-1) ; i++)
        {
		 if (arr[i] == arr[i+1])
		 {
			freq++;
			if (freq > maxfreq)
			{
				maxfreq = freq;
				elm = i;
			}
		}
		else
        {
            freq = 1;
        }
	}
	cout << "\nMode = " << arr[elm];
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
     ma(arr,size);
     mi(arr,size);
     mean(arr,size);
     sor(arr,size);
     median(arr,size);
     mode(arr,size);
}
