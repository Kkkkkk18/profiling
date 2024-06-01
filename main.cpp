
#include <iostream>
#include <random>
#include <chrono>


const int MATRIX_R = 10000;
const int MATRIX_C = 10000;

void createRandomMatrix(int matrix[MATRIX_R][MATRIX_C], int row, int column) {

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            matrix[i][j] = std::rand() % 100 + 1;
        }
    }
}

void calculationRSum(const int matrix[MATRIX_R][MATRIX_C], int row, int column) {

    int row_total_sum = 0;
    for (int i = 0; i < row; ++i) {
        int row_sum = 0;
        for (int j = 0; j < column; ++j) {
            row_sum += matrix[i][j];
            row_total_sum += matrix[i][j];
        }
       
    }
    
}

void calculationCSum(const int matrix[MATRIX_R][MATRIX_C], int row, int column) {

    int col_total_sum = 0;
    for (int j = 0; j < column; ++j) {
        int col_sum = 0;
        for (int i = 0; i < row; ++i) {
            col_sum += matrix[i][j];
            col_total_sum += matrix[i][j];
        }
    }

}
int main() {
    
    const int row = 10000;
    const int column = 10000;

    int matrix[MATRIX_R][MATRIX_C];

    auto r_start = std::chrono::high_resolution_clock::now();
    calculationRSum(matrix, row, column);
    auto r_end = std::chrono::high_resolution_clock::now();
    auto row_duration = std::chrono::duration<double, std::milli>(r_end - r_start);
    std::cout << "time spend by rows: " << row_duration.count() << "ms" << std::endl;


    auto c_start = std::chrono::high_resolution_clock::now();
    calculationCSum(matrix, row, column);
    auto c_end = std::chrono::high_resolution_clock::now();
    auto col_duration = std::chrono::duration<double, std::milli>(c_end - c_start);
    std::cout << "time spend by columns: " << col_duration.count() << "ms" << std::endl;

    
    return 0;
}
