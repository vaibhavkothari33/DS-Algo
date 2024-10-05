#include <iostream>
#include <vector>
using namespace std;

// Function to check if the two matrices can be multiplied
bool canMultiply(int r1, int c1, int r2, int c2) {
    return (c1 == r2);
}

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int r1, int c1, int r2, int c2) {
    vector<vector<int>> result(r1, vector<int>(c2, 0)); // Resultant matrix with dimensions r1 x c2
    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] *  mat2[k][j]; // Multiply and sum
            }
        }   
    }
    return result;
}

int main() {
    // Input matrix dimensions from the user
    int r1, c1, r2, c2;
    
    cout << "Enter rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    
    cout << "Enter rows and columns of the second matrix: ";
    cin >> r2 >> c2;

    // Check if the matrices can be multiplied
    if (!canMultiply(r1, c1, r2, c2)) {
        cout << "Matrices cannot be multiplied. Columns of first matrix must be equal to rows of second matrix." << endl;
        return 0;
    }

    // Input elements of the first matrix
    vector<vector<int>> mat1(r1, vector<int>(c1));
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input elements of the second matrix
    vector<vector<int>> mat2(r2, vector<int>(c2));
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    // Multiply the matrices
    vector<vector<int>> result = multiplyMatrices(mat1, mat2, r1, c1, r2, c2);

    // Display the result matrix
    cout << "The result of matrix multiplication is:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
