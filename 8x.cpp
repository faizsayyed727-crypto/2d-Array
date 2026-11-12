//Transpose of the Matrix 
#include <iostream>
using namespace std;
int main() {
    int r , c;
    cout << "Enter Number of Rows : ";
    cin >> r;
    cout << "Enter Number of Columns : ";
    cin >> c;
    int a[r][c] , b[r][c] , i ,  j;

    cout << "Enter Matrix Elements:\n";
    for(i = 0; i < r; i++) for(j = 0; j < c; j++) cin >> a[i][j];

    //Transpose of the Matrix.
    for(i = 0 ; i < r; i++){
        for(j = 0 ; j < c; j++){
            b[j][i] = a[i][j];
        }
    }

    cout << "\nTranspose Matrix:\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}