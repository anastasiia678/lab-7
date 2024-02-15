#include <iostream>
#include <vector>

void removeLastNegativeRow(std::vector<std::vector<int>>& matrix) {
    int numRows = matrix.size();
    
    for (int row = numRows - 1; row >= 0; --row) {
        bool allNegative = true;

        for (int col = 0; col < matrix[row].size(); ++col) {
            if (matrix[row][col] >= 0) {
                allNegative = false;
                break;
            }
        }

        if (allNegative) {
            matrix.erase(matrix.begin() + row);
            return; // Stop after removing the first row with all negative elements
        }
    }
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            std::cout << element << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    std::cout << "Enter the matrix elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            std::cin >> matrix[i][j];
        }
    }

    removeLastNegativeRow(matrix);

    std::cout << "Matrix after removing last row with only negative elements:" << std::endl;
    printMatrix(matrix);

    return 0;
}
