#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter number of rows and columns: ";
    cin >> row >> col;
    int matrix[row][col];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

