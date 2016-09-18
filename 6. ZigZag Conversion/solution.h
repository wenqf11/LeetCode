#pragma once
#include<vector>
#include<string>
using std::string;
using std::vector;


class Solution {
public:
	string convert(string s, int numRows) {
		const int len = s.length();
		if (len <= 2 || numRows == 1) return s;
		int w_len = len / (numRows*2-2)*(numRows-1);
		if (len % (numRows * 2 - 2) > numRows) {
			w_len += len % (numRows * 2 - 2) - numRows+1;
		}
		else {
			w_len += 1;		}

		char **w = new char*[w_len];
		for (int i = 0; i < w_len; i++) {
			w[i] = new char[numRows];
			for (int j = 0; j < numRows; j++)
				w[i][j] = ' ';
		}
		int x = 0, y = -1, i = 0;
		while(i < s.length()){
			++y;
			if (y == numRows) {
				y = 0;
				x ++;
			}
			if (x % (numRows - 1) == 0) {
				w[x][y] = s[i];
				++i;
			}
			else {
				if ((x % (numRows - 1) +y)==numRows - 1) {
					w[x][y] = s[i];
					++i;
				}
			}
		}

		string st = "";
		
		for (int j = 0; j < numRows; j++)
			for (int i = 0; i < w_len; i++){
				if (w[i][j] != ' ') {
					st += w[i][j];
				}
			}

		return st;
	}
};