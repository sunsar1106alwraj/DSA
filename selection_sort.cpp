#include <iostream>
using namespace std;
void selectSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        swap(array[i], array[min]);
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
    selectSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}