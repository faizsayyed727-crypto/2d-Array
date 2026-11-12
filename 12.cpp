// Wave Printing 1
#include <iostream>
using namespace std;
int main() {
    
    int r, c;
    cout << "Enter Number of Rows in the Matrix : ";
    cin >> r;
    cout << "Enter Number of Columns in the Matrix : ";
    cin >> c;
    int a[r][c];

    cout << "ENTER Matrix Elements : " << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Matrix after Wave Printing : " << endl;
    for(int i = 0; i < r; i++) {
        if(i % 2 == 0) { //even lines
            // Left to Right
            for(int j = 0; j < c; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        else { //odd lines
            // Right to Left
            for(int j = c - 1; j >= 0; j--){
                 cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}