#include <iostream>
#include <cmath>
using namespace std;

const int n = 8;

void board( const int queens[], int numSolution){
    for (int row = 0; row < n; row++){
        cout << 8 - row << " ";
        for (int column = 0; column < n; column++){
            if (queens[row] == column){
                cout << "Q ";
            }else {
                cout << ". ";
            }
        }
        cout << 8 - row << "\n";
    }
    cout << "  a b c d e f g h\n";
}

bool Qsafe(const int queens[], int row, int column){
    for (int prevRow = 0; prevRow < row; prevRow++){
        int prevColumn = queens[prevRow];
        if (prevColumn == column || abs(prevRow - row) == abs(prevColumn - column)){
            return false;
        }
    }
    return true;
}

void solution(int row, int queens[], int& solCount, bool first){
    if (row == n){
        solCount++;
        board(queens, solCount);
        return;
    }
    if (queens[row] != -1){
        if (Qsafe(queens, row, queens[row])){
            solution(row + 1, queens, solCount, first);
        }
        return;
    }
    for (int column = 0; column < n; column++){
        if (Qsafe(queens, row, column)){
            queens[row] = column;
            solution(row + 1, queens, solCount, first);
            queens[row] = -1;
            if (first && solCount > 0) return;
        }
    }
}

int main(){
    int queens[n] = {-1, -1, -1, -1, -1, -1, -1, -1};
    queens[2] = 6;
    int solCount = 0;
    bool showfirst = true;

    solution(0, queens, solCount, showfirst);
    
    if (!showfirst){
        cout << "найдено решений: " << solCount << "\n";
    }
    
    return 0;
}