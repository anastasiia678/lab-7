#include <iostream>
#include <climits>

const int MAX_SIZE = 100; // Adjust the maximum size as needed

void findMaxInColumns(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int col = 0; col < cols; ++col) {
        int maxElement = INT_MIN;

        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col] > maxElement) {
                maxElement = matrix[row][col];
            }
        }

        std::cout << "Max element in column " << col + 1 << ": " << maxElement << std::endl;
    }
}

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    int matrix[MAX_SIZE][MAX_SIZE];

    std::cout << "Enter the matrix elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> matrix[i][j];
        }
    }

    findMaxInColumns(matrix, rows, cols);

    return 0;
}
