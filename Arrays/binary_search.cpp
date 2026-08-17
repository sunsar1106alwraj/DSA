#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int size;

    cout << "Enter size of array: " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter elements in sorted order:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: " << endl;
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        cout << "Found at index: " << result << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}