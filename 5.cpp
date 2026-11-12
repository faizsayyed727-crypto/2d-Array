// Write a program to print the row number having the maximum sum in a given matrix.
#include <iostream>
#include <climits>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows: ";
    cin >> r;
    cout << "Enter Number of Columns: ";
    cin >> c;
    int a[r][c];
    int i , j;

    cout << "Enter Matrix Elements:\n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    int maxSum = INT_MIN;
    int rowNo = -1;

    // Find the row having maximum sum
    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++){
            sum += a[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            rowNo = i;      // i + 1 --> we should return the RowNo directly.
        }
    }

    cout << "Row Number having Maximum Sum = " << rowNo + 1 << endl;
    cout << "Sum of the Maximum Row = " << maxSum << endl;
    return 0;
}