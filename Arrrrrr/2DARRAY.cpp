#include<iostream>
using namespace std;
int main() {
    int nor, noc;
    cout << "Enter the number of rows and columns: ";
    cin >> nor>>noc;
    int A[nor][noc];
    int B[nor][noc];
    int S[nor][noc];
    cout << "Enter elements of matrix A: " << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            cin >> A[r][c];
        }
    }
    cout << "Enter elements of matrix B: " << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            cin >> B[r][c];
        }
    }
    cout << "The sum of the matrices A and B is: " << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            S[r][c] = A[r][c] + B[r][c];
            cout << S[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}

