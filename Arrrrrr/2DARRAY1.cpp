#include<iostream>
using namespace std;
int main() {
    int sum=0;
    int nor, noc;
    cout << "Enter the number of rows: ";
    cin >> nor;
    cout << "Enter the number of columns: ";
    cin >> noc;
    int arr[nor][noc];

    cout << "The elements of the array are: " << endl;
    for (int r = 0; r < nor; r++) {
        for (int c = 0; c < noc; c++) {
                cin>>arr[r][c];
                sum=sum+arr[r][c];
           // cout << sum << " ";
        }
       // cout << endl;
    }
     cout << sum << " ";
    return 0;
}

