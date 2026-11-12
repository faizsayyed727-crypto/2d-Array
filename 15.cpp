#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int a[n][n];

    int minr = 0, maxr = n - 1;
    int minc = 0, maxc = n - 1;
    int num = 1 , i , j;

    while(num <= n * n) {
        // Minimum Row (Left -> Right)
        for(j = minc; j <= maxc && num <= n * n; j++) a[minr][j] = num++;
        minr++;
        // Maximum Column (Top -> Bottom)
        for (i = minr; i <= maxr && num <= n * n; i++) a[i][maxc] = num++;
        maxc--;
        // Maximum Row (Right -> Left)
        for (j = maxc; j >= minc && num <= n * n; j--) a[maxr][j] = num++;
        maxr--;
        // Minimum Column (Bottom -> Top)
        for (i = maxr; i >= minr && num <= n * n; i--) a[i][minc] = num++;
        minc++;
    }

    cout << "\nSpiral Filled Matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) cout << a[i][j] << "\t";
        cout << endl;
    }
    return 0;
}