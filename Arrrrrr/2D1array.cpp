#include<iostream>
using namespace std;
int main() {
    int noc, nor;
    cout << "Rows Number: ";
    cin >> nor;
    cout << " columns number: ";
    cin >> noc;
    int arr[nor][noc];
    cout << "Enter numbers of the array:" << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            cin >> arr[r][c];
        }
    }
    int sum = 0;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
            if (r == 0 || r == nor - 1 || c == 0 || c == noc - 1) {
                sum += arr[r][c];
            }
        }
    }

    cout << "Sum of border Number: " << sum << endl;

    return 0;
}

