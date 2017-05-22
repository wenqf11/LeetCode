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

class WordDictionary {
public:
	struct TrieNode {
		TrieNode* child[NUM_CHILD];
		TrieNode() {
			for (int i = 0; i < NUM_CHILD; i++) {
				child[i] = NULL;
			}
			isWord = false;
		}
		bool isWord;
	};

	/** Initialize your data structure here. */
	WordDictionary() {
		root = new TrieNode();
	}

	/** Adds a word into the data structure. */
	void addWord(string word) {
		TrieNode* p = root;
		for (int i = 0; i < word.size(); i++) {
			if (!p->child[word[i] - 'a']) {
				p->child[word[i] - 'a'] = new TrieNode();
			}
			p = p->child[word[i] - 'a'];
		}
		p->isWord = true;
	}

	/** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
	bool search(string word) {
		return searchWord(word, 0, root);
	}

	bool searchWord(string& word, int index, TrieNode* p) {
		if (index >= word.size()) return p->isWord;
		if (word[index] == '.') {
			for (int i = 0; i < NUM_CHILD; i++) {
				if (p->child[i] && searchWord(word, index + 1, p->child[i])) return true;
			}
			return false;
		} else {
			return p->child[word[index] - 'a'] && searchWord(word, index + 1, p->child[word[index] - 'a']);
		}
	}

private:
	TrieNode* root;
};