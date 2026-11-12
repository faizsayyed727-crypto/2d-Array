// Find out the max , min element of a 2D array & the index of max element (i,j).
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
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c; j++){
            cin >> a[i][j];
        }
    }
    
    int max = a[0][0] , min = a[0][0];
    for(i = 0 ; i < r ; i++){
        for(j = 0 ; j < c; j++){
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j]; 
        }
    }

    cout << "Maximum of all the Elements in the Matrix is : " << max;
    cout << endl;
    cout << "Minimum of all the Elements in the Matrix is : " << min;
    return 0;
}