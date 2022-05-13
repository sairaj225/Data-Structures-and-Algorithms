#include <iostream>
using namespace std;

int *selection_sort(int n, int arr[])
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}


int main()
{
    int size = 6;
    int arr[] = {2, 3, 1, 5, 9, 4};
    int *ret = selection_sort(size, arr);
    for(int i=0; i<size; i++)
    {
        cout << ret[i] << " ";
    }
}