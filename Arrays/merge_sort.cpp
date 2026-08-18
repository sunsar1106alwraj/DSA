#include <iostream>
using namespace std;
void mergeArrays(int a[], int n1, int b[], int n2, int c[], int n3)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    n3 = k;
}
int main()
{
    int a[] = {2, 5, 8, 12};
    int b[] = {1, 3, 7, 10, 15};
    int n1 = 4;
    int n2 = 5;
    int n3 = n1 + n2;
    int c[n3];
    mergeArrays(a, n1, b, n2, c, n3);
    cout << "Merged Array: ";
    for (int i = 0; i < n3; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}