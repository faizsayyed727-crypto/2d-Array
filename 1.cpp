// Write a program to Add two matrices.
#include <iostream>
using namespace std;
int main() {
    int r , c;
    cout << "Enter Number of Rows and Columns of both Matrices : \n";
    cin >> r >> c;
    int a[r][c], b[r][c], res[r][c];
    int i , j;
    cout << "INPUT First Matrix Elements : \n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) cin >> a[i][j];
    }
    cout << "INPUT Second Matrix Elements : \n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) cin >> b[i][j];
    }
    cout << "\nSum of the Two Matrices is Given as : \n";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            res[i][j] = a[i][j] + b[i][j];
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}