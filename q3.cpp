//Sum of the Diagonals elements in the Matrix.
//Time Complexity --> O(n^2).
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter Number of Rows / Columns : ";
    cin >> n;
    int a[n][n];

    cout << "Enter Square Matrix Elements :\n";
    for(i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];

    int sum = 0;
    for(i = 0; i < n ; i++){
        for(j = 0; j < n ; j++){
            if(i == j || i + j == n - 1) sum += a[i][j];
       }
    }

    cout << "Sum of all the Diagonal Element is : " << sum;
}