#include<iostream>
using namespace std;
int main() {
    int nor, noc;
    cout << "Enter the number of rows and columns: ";
    cin >> nor >> noc;
    int A[nor][noc];
    int T[noc][nor]; // Note the dimensions for transpose matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            cin >> A[r][c];
        }
    }
    // Finding the transpose
    for (int r = 0; r < noc; r++) {
        for (int c = 0; c < nor; c++) {
            T[r][c] = A[c][r];
        }
    }
    cout << "The Transpose Matrix is:" << endl;
    for (int r = 0; r < noc; r++) {
        for (int c = 0; c < nor; c++) {
            cout << T[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}

