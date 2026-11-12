// WAP to rotate the Square Matrix to 90 degree in Clockwise Direction.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a[n][n];
    int i , j;

    // Input the Matrix Elements
    cout << "Enter Matrix Elements:\n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Step 1:- Transpose the Matrix
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Step 2:- Reverse every Row
    for(int i = 0; i < n; i++) {
        int top = 0 , bottom = n - 1;
        while(top < bottom) {
            int temp = a[i][top];
            a[i][top] = a[i][bottom];
            a[i][bottom] = temp;
            top++;
            bottom--;
    }
    }

    //Step 3 :- Print Rotated Matrix
    cout << "Matrix after Rotating to 90 degree in AntiClockwise Direction : \n";
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}