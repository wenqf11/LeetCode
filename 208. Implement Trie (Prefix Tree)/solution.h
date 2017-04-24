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


class TrieNode {
public:
	TrieNode() {
		for (int i = 0; i < 26; i++)
			child[i] = NULL;
		isWord = false;
	}
	TrieNode *child[26];
	bool isWord;
};

class Trie {
private:
	TrieNode* root;

public:
	/** Initialize your data structure here. */
	Trie() {
		root = new TrieNode();
	}

	/** Inserts a word into the trie. */
	void insert(string word) {
		TrieNode *p = root;
		int len = word.size();
		for (int i = 0; i < len; i++) {
			if (!p->child[word[i] - 'a']) {
				p->child[word[i] - 'a'] = new TrieNode();
			}
			p = p->child[word[i] - 'a'];
		}
		p->isWord = true;
	}

	/** Returns if the word is in the trie. */
	bool search(string word) {
		TrieNode *p = root;
		int len = word.size();
		for (int i = 0; i < len; i++) {
			if (!p->child[word[i] - 'a']) {
				return false;
			}
			p = p->child[word[i] - 'a'];
		}
		if (p->isWord) return true;
		return false;
	}

	/** Returns if there is any word in the trie that starts with the given prefix. */
	bool startsWith(string prefix) {
		TrieNode *p = root;
		int len = prefix.size();
		for (int i = 0; i < len; i++) {
			if (!p->child[prefix[i] - 'a']) {
				return false;
			}
			p = p->child[prefix[i] - 'a'];
		}
		return true;
	}
};