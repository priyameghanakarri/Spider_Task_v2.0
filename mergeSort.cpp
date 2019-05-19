//Code for merge sort

#include<bits/stdc++.h>

using namespace std;

//Merge algorithm
void merge(int a[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];


    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

//Divide and conquer algorithm
void mergeSort(int a[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        // Sort first and second halves  where we Divide
        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        //Conquer step where we merge
        merge(a, l, m, r);
    }
}


/* Function to print an array */
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
       cout<<a[i]<<" ";
    cout<<"\n";
}


int main()
{
    int a[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(a)/sizeof(a[0]);

    cout<<"Given array is \n";
    printArray(a, arr_size);

    mergeSort(a, 0, arr_size - 1);

    cout<<"\nThe sorted array is\n";
    printArray(a, arr_size);
    return 0;
}