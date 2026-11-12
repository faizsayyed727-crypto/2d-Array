//Sum of the Diagonals elements in the Matrix.s
//Time Complexity --> O(n).
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout << "Enter Number of Rows / Columns : ";
    cin >> n;
    int a[n][n];

    cout << "Enter Matrix Elements :\n";
    for(i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];

    int sum = 0;

    for(i = 0  ; i < n ; i++){
        sum += a[i][i]; //primary diagonal
        sum += a[i][n - i - 1];     //secondary diagonal
    }
    //if n is odd remove the middle element
    if(n % 2 == 1) sum -= a[n/2][n/2];

    cout << "Sum of all the Diagonal Element is : " << sum;
}