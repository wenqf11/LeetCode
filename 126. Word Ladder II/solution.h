#pragma once
#include <vector>
#include <queue>
#include <string>
#include <climits>
#include <cmath>
using namespace std;


struct Element {
	string str;
	int length;
};
class Solution {
private:
	int minLength = 0;
	string endW;
	vector<vector<string>> res;
public:
	bool canTransform(string from, string to) {
		int diff = 0;
		for (int i = 0; i < from.length(); i++) {
			if (from[i] != to[i]) {
				diff ++;
				if (diff > 1) break;
			}
		}
		return diff < 2;
	}

	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		queue<Element> q;
		vector<bool> isInQueue(wordList.size(), 0);
		int ans = 0;
		Element begin = {beginWord, 1};
		q.push(begin);
		while (!q.empty()) {
			Element e = q.front();
			q.pop();
			if (e.str == endWord) {
				ans = e.length;
				break;
			}
			for (int i = 0; i < wordList.size(); i++) {
				if (!isInQueue[i] && canTransform(e.str, wordList[i])) {
					Element newEle = {wordList[i], e.length + 1};
					q.push(newEle);
					isInQueue[i] = true;
				}
			}
		}
		return ans;
	}

	bool isNotinLadder(string word, vector<string> & ladder) {
		for (int i = 0; i < ladder.size(); i++) {
			if (word == ladder[i]) {
				return false;
			}
		}
		return true;
	}

	void findMinLengthLadders(string lastWord, vector<string> ladder, vector<string>& wordList) {
		ladder.push_back(lastWord);
		if (lastWord == endW) {
			res.push_back(ladder);
		}
		if (ladder.size() >= minLength) return;

		for (int i = 0; i < wordList.size(); i++) {
			if (canTransform(lastWord, wordList[i])) {
				findMinLengthLadders(wordList[i], ladder, wordList);
			}
		}
	}

	vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
		endW = endWord;
		minLength = ladderLength(beginWord, endWord, wordList);
		findMinLengthLadders(beginWord, {}, wordList);
		return res;
	}
};
