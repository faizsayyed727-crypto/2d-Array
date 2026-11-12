//Count Number of Zeroes in a Sorted Matrix.
//Brute Force Approach --> Time Complexity - O(n * m).
#include<iostream>
using namespace std;
int main(){
    int r , c;
    cout << "Enter Number of Rows in the Matrix : ";
    cin >> r;
    cout << "Enter Number of Columns in the Matrix : ";
    cin >> c;
    int i , j;
    int a[r][c];

    cout << "INPUT Matrix Elements : " << endl;
    for(i = 0 ; i < r ; i++) for(j = 0 ; j < c; j++) cin >> a[i][j];

    int noz = 0;
    for(i = 0 ; i < r ; i++) for(j = 0; j < c ; j++) if(a[i][j] == 0) noz++;

    cout << "Number of Zeroes = : " << noz;
}