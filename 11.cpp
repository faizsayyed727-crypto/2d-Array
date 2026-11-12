// Write a program to multiply two matrices.
#include <iostream>
using namespace std;
int main() {
    int r1, c1, r2, c2;
    cout << "Enter Number of Rows and Columns of First Matrix : ";
    cin >> r1 >> c1;
    cout << "Enter Number of Rows and Columns of Second Matrix : ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix Multiplication is Not Possible.";
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], res[r1][c2];
    int i , j , k;

    cout << "INPUT First Matrix Elements:\n";
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) cin >> a[i][j];
    }

    cout << "INPUT Second Matrix Elements:\n";
    for(i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) cin >> b[i][j];
    }

    // Initialize result matrix with 0
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) res[i][j] = 0;
    }

    // Matrix Multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    cout << "\nMultiplication of the Two Matrices:\n";
    for (i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}