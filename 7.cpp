// Write a program to print the transpose of a matrix.
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows: ";
    cin >> r;
    cout << "Enter Number of Columns: ";
    cin >> c;
    int a[r][c];
    int i, j;

    cout << "Enter Matrix Elements:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "\nTranspose of the Matrix:\n";
    for(i = 0; i < c; i++) {   // r <--> c
        for(j = 0; j < r; j++) {   // c <--> r
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}