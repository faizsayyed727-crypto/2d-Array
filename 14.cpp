// Spiral Printing.
#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter Number of Rows in the Matrix : ";
    cin >> r;
    cout << "Enter Number of Columns in the Matrix : ";
    cin >> c;
    int i, j;
    int a[r][c];
    cout << "INPUT First Matrix Elements : " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    }

    cout << endl;
    int minr = 0, maxr = r - 1;
    int minc = 0, maxc = c - 1;
    int tne = r * c, count = 0;

    cout << "\nSpiral Order:\n";
    while (count < tne)
    {
        // Minimum Row
        for (j = minc; j <= maxc && count < tne; j++)
        {
            cout << a[minr][j] << " ";
            count++;
        }
        minr++;
        // Maximum Column
        for (i = minr; i <= maxr && count < tne; i++)
        {
            cout << a[i][maxc] << " ";
            count++;
        }
        maxc--;
        // Maximum Row
        for (j = maxc; j >= minc && count < tne; j--)
        {
            cout << a[maxr][j] << " ";
            count++;
        }
        maxr--;
        // Minimum Column
        for (i = maxr; i >= minr && count < tne; i--)
        {
            cout << a[i][minc] << " ";
            count++;
        }
        minc++;
    }
    return 0;
}