#include <iostream>
using namespace std;

void matrixCreate()
{
    int r;
    int c;
    cout << "enter rows: " << endl;
    cin >> r;
    cout << "enter columns: " << endl;
    cin >> c;
    int M[r][c];
    cout << "enter elements: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> M[i][j];
        }
    }
    cout << "you entered: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    matrixCreate();
    return 0;
}