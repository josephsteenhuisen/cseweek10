#include "main.h"

Fraction create_fraction(int a, int b){
    Fraction res;
    res.fraction.first = a;
    res.fraction.second = b;
    return res;
}


Fraction sum_fraction_pair(Fraction x, Fraction y){
    Fraction result;
    result.fraction.first = x.fraction.first*y.fraction.second + x.fraction.second * y.fraction.first;
    result.fraction.second = x.fraction.second * y.fraction.second;
    return result;
}

Fraction multiply_fraction_pair(Fraction x, Fraction y){
    Fraction result;
    result.fraction.first = x.fraction.first * y.fraction.first;
    result.fraction.second = x.fraction.second * y.fraction.second;
    return result;
}



Matrix multiply_matrix(const Matrix& first, const Matrix& second) {
    Matrix mat(first.rows, second.cols);
    for (int i = 0; i < first.rows; i++) {
        for (int j = 0; j < second.cols; j++) {
            Fraction sum = create_fraction(0, 1); 
            for (int k = 0; k < second.rows; k++) {
                Fraction product = multiply_fraction_pair(first.matrix[i][k], second.matrix[k][j]);
                sum = sum_fraction_pair(sum, product);
            }
            mat.matrix[i][j] = sum; 
        }
    }
    return mat;
}

Matrix create_fraction_matrix(int rows, int cols){
    Matrix matrix(rows, cols);
    return matrix;
}


void setFraction(Matrix& matrix, int row, int col, const Fraction& fraction) {
        matrix.matrix[row][col] = fraction;
}

void printMatrix(Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                std::cout << "(" << matrix.matrix[i][j].fraction.first << "/" << matrix.matrix[i][j].fraction.second << ") ";
            }
            std::cout << std::endl;
        }
}

