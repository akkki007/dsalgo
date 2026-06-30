#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = n - 1; i >= 0; i--)
    { // Use two nested loops to iterate over the array
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "SORTED ARRAY " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[] = {6, 3, 4, 1, 2};
    selectionSort(arr, 5);
}