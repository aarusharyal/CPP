#include<iostream>
using namespace std;

int main() {
    // Declare variables for matrix dimensions
    int row, col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    
    // Create a 2D matrix with given dimensions
    int matrix[row][col];
    cout<<"Enter matrix elements:\n";
    
    // Read matrix elements from user
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin>>matrix[i][j];
        }
    }
    
    // Display the matrix
    cout<<"Matrix:\n";
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
