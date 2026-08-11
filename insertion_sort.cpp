#include <iostream>
using namespace std;
void insertionSort(int array[], int N)
{
    for (int i = 1; i < N; i++)
    {
        int temp = array[i];
        int ptr = i - 1;

        while (ptr >= 0 && temp < array[ptr])
        {
            array[ptr + 1] = array[ptr];
            ptr--;
        }

        array[ptr + 1] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter size of array:" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element: " << endl;
        cin >> arr[i];
    }
    insertionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}