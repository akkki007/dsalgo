#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i; // Assume the current index holds the minimum value

        // Find the index of the smallest element from the remaining array 
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j; // Update minimum if smaller element is found
            }
        }

        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }

    cout << "After selection sort : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {56, 45, 52, 23, 43, 9, 10, 66, 34, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before selection sort " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    selectionSort(arr, size);

    return 0;
}