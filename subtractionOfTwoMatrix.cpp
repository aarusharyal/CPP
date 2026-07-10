#include<iostream>
using namespace std;
int main() {
    int row, column;
    cin >> row >> column;
    int a[row][column], b[row][column], diff[row][column];

    cout << "Enter first matrix:\n";
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            cin >> b[i][j];

    for(int i=0;i<row;i++)
        for(int j=0;j<column;j++)
            diff[i][j] = a[i][j] - b[i][j];

    cout << "Difference matrix:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
            cout << diff[i][j] << " ";
        cout << endl;
    }

    return 0;
}
