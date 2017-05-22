#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
#include <stack>
#include <set>
#include <sstream>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define NUM_CHILD 26
struct TrieNode {
	TrieNode* child[NUM_CHILD];
	TrieNode() {
		for (int i = 0; i < NUM_CHILD; i++) {
			child[i] = NULL;
		}
		isWord = false;
	}
	bool isWord;
	string word;
};

class Solution {
public:
	vector<string> res;
	/** Adds a word into the data structure. */
	void addWord(TrieNode* p, string word) {
		for (int i = 0; i < word.size(); i++) {
			if (!p->child[word[i] - 'a']) {
				p->child[word[i] - 'a'] = new TrieNode();
			}
			p = p->child[word[i] - 'a'];
		}
		p->isWord = true;
		p->word = word;
	}

	void search(vector< vector<char> >& board, int i, int j, TrieNode* node, vector< vector<bool> > visited) {
		visited[i][j] = true;
		if (node->isWord) {
			res.push_back(node->word);
			node->isWord = false;
		}

		if (i - 1 >= 0 && !visited[i - 1][j] && node->child[board[i - 1][j] - 'a']) {
			search(board, i - 1, j, node->child[board[i - 1][j] - 'a'], visited);
		}

		if (i + 1 < board.size() && !visited[i + 1][j] && node->child[board[i + 1][j] - 'a']) {
			search(board, i + 1, j, node->child[board[i + 1][j] - 'a'], visited);
		}

		if (j - 1 >= 0 && !visited[i][j - 1] && node->child[board[i][j - 1] - 'a']) {
			search(board, i, j - 1, node->child[board[i][j - 1] - 'a'], visited);
		}

		if (j + 1 < board[0].size() && !visited[i][j + 1] && node->child[board[i][j + 1] - 'a']) {
			search(board, i, j + 1, node->child[board[i][j + 1] - 'a'], visited);
		}
	}

	vector<string> findWords(vector< vector<char> >& board, vector<string>& words) {
		int m = board.size();
		if (m == 0) return res;
		int n = board[0].size();
		if (n == 0) return res;

		TrieNode* root = new TrieNode();

		int len = words.size();
		for (int i = 0; i < len; ++i) {
			addWord(root, words[i]);
		}

		vector< vector<bool> > visited(m, vector<bool>(n, 0));
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (root->child[board[i][j] - 'a'] != NULL) {
					search(board, i, j, root->child[board[i][j] - 'a'], visited);
				}
			}
		}

		return res;
	}
};