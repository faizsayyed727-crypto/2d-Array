// Given a matrix 'a' of dimension n x m and 2 coordinates (r1, c1) and (r2, c2).
// Return the sum of the rectangle from (r1, c1) to (r2, c2).

#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows in the Matrix : ";
    cin >> r;
    cout << "Enter Number of Columns in the Matrix : ";
    cin >> c;
    int a[r][c];
    int i , j;

    cout << "INPUT Matrix Elements : " << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    int r1, c1, r2, c2;
    cout << "Enter r1 : ";
    cin >> r1;
    cout << "Enter c1 : ";
    cin >> c1;
    cout << "Enter r2 : ";
    cin >> r2;
    cout << "Enter c2 : ";
    cin >> c2;
    int sum = 0;

    // Traverse only the required rectangle
    for (i = r1; i <= c1; i++) {
        for (j = r2; j <= c2; j++) {
            sum += a[i][j];
        }
    }

    cout << "Sum of the rectangle = " << sum << endl;
    return 0;
}