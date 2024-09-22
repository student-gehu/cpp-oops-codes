#include<iostream>
using namespace std;

class Sudoku {
    private:
        int mat[9][9];
        bool isValid(int, int, int);
    public:
        void readMatrix();
        bool isSafe(int, int, int);
        bool solve();
        void printMatrix();
};

void Sudoku::readMatrix() {
    cout << "Enter the Sudoku matrix:" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> mat[i][j];
        }
    }
}

bool Sudoku::isValid(int row, int col, int num) {
    // Check the row
    for (int i = 0; i < 9; i++) {
        if (mat[row][i] == num) {
            return false;
        }
    }

    // Check the column
    for (int i = 0; i < 9; i++) {
        if (mat[i][col] == num) {
            return false;
        }
    }

    // Check the 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

bool Sudoku::isSafe(int row, int col, int num) {
    return isValid(row, col, num);
}

bool Sudoku::solve() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (mat[i][j] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (isSafe(i, j, num)) {
                        mat[i][j] = num;
                        if (solve()) {
                            return true;
                        }
                        mat[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Sudoku::printMatrix() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    Sudoku sudoku;
    sudoku.readMatrix();
    if (sudoku.solve()) {
        sudoku.printMatrix();
    } else {
        cout << "No solution exists" << endl;
    }
    return 0;
}