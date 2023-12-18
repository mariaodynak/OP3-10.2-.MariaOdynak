#include <iostream>
#include <math.h>
using namespace std;
typedef double matr[50][50];
typedef double matr2[50][50];
int main() {
    matr a;
    matr2 b;
    int i = 0, j, m, n, q;
    cout << "Enter the size of the matrix: ";
    cin >> m;
    cout << "What exactly will be the media: ";
    cin >> n;
    cout << "Enter 0 to shift the matrix to the right and 1 to shift it down: ";
    cin >> q;
    if (q == 0) {
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                b[i][j] = a[i][m - n + j];
        for (i = 0; i < m; i++)
            for (j = n; j < m; j++)
                b[i][j] = a[i][j - n];
    }
    if (q == 1) {
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                b[i][j] = a[m - n + i][j];
        for (i = n; i < m; i++)
            for (j = 0; j < m; j++)
                b[i][j] = a[i - n][j];
    }

    for (i = 0; i < m; i++) {
        cout << "Enter " << i + 1 << " line: \n";
        for (j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}