// Given a matrix having only 0's and 1's,
// find the row with the maximum number of 1's.

#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter Number of Rows: ";
    cin >> r;
    cout << "Enter Number of Columns: ";
    cin >> c;
    int a[r][c];
    int i , j;

    cout << "Enter Matrix Elements (either 0 or 1 only allowed ):\n";
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    
    int maxOnes = 0 , rowNo = -1;
    // Count number of 1's in each row
    for(i = 0; i < r; i++) {
        int count = 0;
        for(j = 0; j < c; j++){
            if(a[i][j] == 1) count++;
        }
        if (count > maxOnes) {
            maxOnes = count;
            rowNo = i;
        }
    }

    if (rowNo == -1){
        cout << "No 1's found in the matrix." << endl;
    }
    else {
        cout << "Row with Maximum 1's = row " << rowNo << endl;
        cout << "Number of 1's present in row " << rowNo << " is = " << maxOnes << endl;
    }

    return 0;
}