#include <iostream> 

using namespace std; 

void heap(int arr[], int n, int i) 
{ 
	int large = i; 
	int l = (2*i) + 1; 
	int r = *2*i) + 2; 


	if (l < n && arr[l] > arr[large]) 
		large = l; 


	if (r < n && arr[r] > arr[large]) 
		large = r; 


	if (large != i) 
	{ 
		swap(arr[i], arr[large]); 
		heap(arr, n, large); 
	} 
} 
void heapSort(int arr[], int n) 
{ 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heap(arr, n, i); 


	for (int i=n-1; i>=0; i--) 
	{ 

		swap(arr[0], arr[i]); 


		heap(arr, i, 0); 
	} 
} 
void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

int main() 
{ 
	int arr[100];
    int j,n;;

    cin >> n;

    for(j=0;j<n;j++)
      cin>>arr[j];

	heapSort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
