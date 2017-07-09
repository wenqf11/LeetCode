#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    vector< vector<char> > board(3, vector<char>(4, 0));
    board[0][0] = 'X';
    board[0][1] = '.';
    board[0][2] = '.';
    board[0][3] = 'X';

    board[1][0] = '.';
    board[1][1] = '.';
    board[1][2] = '.';
    board[1][3] = 'X';

    board[2][0] = '.';
    board[2][1] = '.';
    board[2][2] = '.';
    board[2][3] = 'X';

    cout << s.countBattleships(board) << endl;
}