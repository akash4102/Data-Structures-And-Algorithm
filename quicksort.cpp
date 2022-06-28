#include <iostream>
using namespace std;

int partition(int *arr, int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotind = start + count;
    swap(arr[start], arr[pivotind]);
    int i = start, j = end;
    while (i < pivotind and j > pivotind)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j++;
        if (i < pivotind and j > pivotind)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotind;
}
void quicksort(int *arr, int start, int end)
{
    if (start >= end)
        return;
    int p = partition(arr, start, end);
    quicksort(arr, start, p - 1);
    quicksort(arr, p + 1, end);
}
int main()
{
    int arr[] = {3, 5, 1, 8, 4, 2};
    int size = 6;
    quicksort(arr, 0, size - 1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}