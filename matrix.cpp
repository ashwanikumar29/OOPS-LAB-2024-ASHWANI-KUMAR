#include <iostream>
#include <vector>

class Matrix {
private:
    int rows;
    int cols;
    std::vector<std::vector<int>> mat;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols));
    }

    void readMatrix() {
        std::cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> mat[i][j];
            }
        }
    }

    void printMatrix() {
        for (const auto &row : mat) {
            for (const auto &elem : row) {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    }

    Matrix operator+(const Matrix &other) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix &other) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] - other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix &other) {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix m1(2, 2);
    m1.readMatrix();
    Matrix m2(2, 2);
    m2.readMatrix();

    Matrix sum = m1 + m2;
    std::cout << "Sum of matrices:\n";
    sum.printMatrix();

    Matrix diff = m1 - m2;
    std::cout << "Difference of matrices:\n";
    diff.printMatrix();

    Matrix prod = m1 * m2;
    std::cout << "Product of matrices:\n";
    prod.printMatrix();

    return 0;
}
