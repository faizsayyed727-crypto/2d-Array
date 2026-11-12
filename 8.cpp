//Transpose of the Square Matrix 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a[n][n];
    int i , j;

    cout << "Enter Matrix Elements:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) cin >> a[i][j];
    }

    // Transpose the matrix
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
            // swap(a[i][j] , a[j][i]);
        }
    }
    cout << "\nTranspose Matrix:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}