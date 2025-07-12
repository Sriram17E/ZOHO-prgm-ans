#include<iostream>
#include<set>
using namespace std;

bool isValidSudoku(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        set<int> row, col;
        for (int j = 0; j < 9; j++) {
            if (grid[i][j]) {
                if (row.count(grid[i][j])) return false;
                row.insert(grid[i][j]);
            }
            if (grid[j][i]) {
                if (col.count(grid[j][i])) return false;
                col.insert(grid[j][i]);
            }
        }
    }

    // Check 3x3 boxes
    for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) {
            set<int> box;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int val = grid[row + i][col + j];
                    if (val) {
                        if (box.count(val)) return false;
                        box.insert(val);
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    int sudoku[9][9] = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if (isValidSudoku(sudoku))
        cout << "Sudoku is valid\n";
    else
        cout << "Sudoku is invalid\n";
    return 0;
}






/*
Sudoku Grid:
{5, 3, 0,  0, 7, 0,  0, 0, 0},
{6, 0, 0,  1, 9, 5,  0, 0, 0},
{0, 9, 8,  0, 0, 0,  0, 6, 0},

{8, 0, 0,  0, 6, 0,  0, 0, 3},
{4, 0, 0,  8, 0, 3,  0, 0, 1},
{7, 0, 0,  0, 2, 0,  0, 0, 6},

{0, 6, 0,  0, 0, 0,  2, 8, 0},
{0, 0, 0,  4, 1, 9,  0, 0, 5},
{0, 0, 0,  0, 8, 0,  0, 7, 9}
*/



// Output:
// Start index : <1,2>
// End index   : <1,4>
// Start index : <1,2>
// End index   : <3,2>

