#include<iostream>
using namespace std;
int main() {
    int noe, noc;
    cout << "Enter the number of rows: ";
    cin >> noe;
    cout << "Enter the number of columns: ";
    cin >> noc;
    int arr[noe][noc];
    cout << "Enter the elements of the array:" << endl;
    for (int r = 0; r < noe; r++) {
        for (int c = 0; c < noc; c++) {
            cin >> arr[r][c];
        }
    }
    cout << " The elements of the array are:" << endl;
    for (int r = 0; r < noe; r++) {
        for (int c = 0; c < noc; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}

