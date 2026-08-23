#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    bool isSafe(vector<string>& board, int row, int col, int n) {

        // Check same row
        for (int j = 0; j < n; j++) {
            if (board[row][j] == 'Q') {
                return false;
            }
        }

        // Check same column
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1;
             i >= 0 && j >= 0;
             i--, j--) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1;
             i >= 0 && j < n;
             i--, j++) {

            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<string>& board,
                 int row,
                 int n,
                 vector<vector<string>>& ans) {

        // Base case
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column
        for (int col = 0; col < n; col++) {

            if (isSafe(board, row, col, n)) {

                // Place Queen
                board[row][col] = 'Q';

                // Move to next row
                nQueens(board, row + 1, n, ans);

                // Backtracking
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));

        vector<vector<string>> ans;

        nQueens(board, 0, n, ans);

        return ans;
    }
};

int main() {

    int n;

    cout << "Enter N: ";
    cin >> n;

    Solution s;

    vector<vector<string>> ans = s.solveNQueens(n);

    cout << "\nTotal Solutions: " << ans.size() << "\n\n";

    for (int k = 0; k < ans.size(); k++) {

        cout << "Solution " << k + 1 << ":\n";

        for (int i = 0; i < n; i++) {
            cout << ans[k][i] << endl;
        }

        cout << endl;
    }

    return 0;
}