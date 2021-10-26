//MergeSort Algorithm Using Recursive method
#include <iostream>
using namespace std;
void merge(int arr[], int first, int mid, int last){
int i, j, k;
int n1 = mid - first + 1;
int n2 = last - mid;
// create temp arrays
int L[n1], R[n2];
for (i = 0; i < n1; i++)
L[i] = arr[first + i];
for (j = 0; j < n2; j++)
R[j] = arr[mid + 1 + j];

i = 0; j = 0; k = first;
while (i < n1 && j < n2)
{
if (L[i] <= R[j]) {
arr[k] = L[i];
i++;
}
else {
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1) {
arr[k] = L[i];
i++;
k++;
}

while (j < n2) {
arr[k] = R[j];
j++;
k++;
}
}
void mergeSort(int arr[], int first, int last){
if (first < last) {
int mid = (first + last)/ 2;
mergeSort(arr, first, mid);
mergeSort(arr, mid + 1, last);
merge(arr, first, mid, last);
}
}
int main()
{
int arr[5];
for(int i=0;i<5;i++)
{
cout<<" enter value";
cin>>arr[i];
}
for(int i=0;i<5;i++)
{
cout<<arr[i]<<"\n";
}
int arr_size = sizeof(arr) / sizeof(arr[0]);
cout<<"Given array is \n";
for(int i=0;i<arr_size;i++)
cout<<arr[i]<<"\t";
mergeSort(arr, 0, arr_size - 1);
cout<<"\nSorted array is \n";
for(int i=0;i<arr_size;i++)
cout<<arr[i]<<"\t";
return 0;
}