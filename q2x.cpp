//Count Number of Negatives in 2d sorted array.
#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows : ";
    cin >> r;
    cout << "Enter Number of Columns : ";
    cin >> c;
    int a[r][c];

    cout << "Enter Matrix Elements :\n";
    for(int i = 0; i < r; i++) for(int j = 0; j < c; j++) cin >> a[i][j];

    int i = 0 , j = c - 1 , count = 0;
    while (i < r && j >= 0) {
        if (a[i][j] < 0) {
            count += (r - i);   // Current row + all rows below
            j--;                // Move left
        }
        else i++;     // Move down
    }

    cout << "Number of Negatives in the Array : " << count;

    return 0;
}