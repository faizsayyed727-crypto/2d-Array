//Count Number of Negatives in 2d array.
//TIme Complexity - O(m * n)
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows : ";
    cin >> r;
    cout << "Enter Number of Columns : ";
    cin >> c;
    int i , j ;
    int a[r][c];
    cout << "Enter Matrix Elements :\n";
    for(i = 0 ; i < r ; i++) for(j = 0 ; j < c; j++) cin >> a[i][j];

    int count = 0;
    for(i = 0; i < r; i++) for(j = 0; j < c; j++) if(a[i][j] < 0) count++;

    cout << "Number of Negative Elements = " << count;
    return 0;
}