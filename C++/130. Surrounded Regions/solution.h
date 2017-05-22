#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <unordered_set>
#include <cmath>
using namespace std;

struct Node {
	int x, y;
	Node(int i, int j): x(i), y(j) {};
};

class Solution {
public:
	void solve(vector<vector<char>> & board) {
		if (board.size() == 0) return;
		vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
		vector<Node> q;
		Node element(0, 0);
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[0].size(); j++) {
				if (!visited[i][j]) {
					if (board[i][j] == 'O') {
						q.clear();
						q.push_back(Node(i, j));

						bool isSurrounded = true;
						int first = 0;

						visited[i][j] = true;
						while (first < q.size()) {
							element = q[first];

							if (element.x > 0) {
								if ( board[element.x - 1][element.y] == 'O' && !visited[element.x - 1][element.y]) {
									q.push_back(Node(element.x - 1, element.y));
									visited[element.x - 1][element.y] = true;
								}
							} else {
								isSurrounded = false;
							}

							if (element.x < board.size() - 1) {
								if (board[element.x + 1][element.y] == 'O' && !visited[element.x + 1][element.y]) {
									q.push_back(Node(element.x + 1, element.y));
									visited[element.x + 1][element.y] = true;
								}
							} else {
								isSurrounded = false;
							}

							if (element.y > 0) {
								if (board[element.x][element.y - 1] == 'O' && !visited[element.x][element.y - 1]) {
									q.push_back(Node(element.x, element.y - 1));
									visited[element.x][element.y - 1] = true;
								}
							} else {
								isSurrounded = false;
							}

							if (element.y < board[0].size() - 1) {
								if (board[element.x][element.y + 1] == 'O' && !visited[element.x][element.y + 1]) {
									q.push_back(Node(element.x, element.y + 1));
									visited[element.x][element.y + 1] = true;
								}
							} else {
								isSurrounded = false;
							}

							first++;
						}
						if (isSurrounded) {
							for (int k = 0; k < q.size(); k++) {
								board[q[k].x][q[k].y] = 'X';
							}
						}
					} else {
						visited[i][j] = true;
					}
				}
			}
		}
	}
};