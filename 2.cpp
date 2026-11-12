//Write a program to add all the elements of the matrix.
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
    int sum = 0;

    cout << "INPUT Matrix Elements : " << endl;
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
    }

    cout << "Sum of all the Elements in the Matrix is : " << sum;
    return 0;
}