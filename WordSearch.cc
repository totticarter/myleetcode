

// I have no idea about this problem
// and copy from others
#include<iostream>
#include<vector>

using namespace std;

bool dfs(const vector<vector<char> >& board, const string& word, int index, int x, int y, vector<vector<bool> >& visited){

	if (index == word.size())
		return true; // 收敛条件
	if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size())
		return false; // 越界,终止条件
	if (visited[x][y])
		return false; // 已经访问过,剪枝
	if (board[x][y] != word[index])
		return false; // 不相等,剪枝
	visited[x][y] = true;

	bool ret = dfs(board, word, index + 1, x - 1, y, visited)
			|| dfs(board, word, index + 1, x + 1, y, visited)
			|| dfs(board, word, index + 1, x, y - 1, visited)
			|| dfs(board, word, index + 1, x, y + 1, visited);
	visited[x][y] = false;
	return ret;
}

bool exist(vector<vector<char> >& board, string word){

	const int m = board.size();
	const int n = board[0].size();
	vector<vector<bool> > visited(m, vector<bool>(n, false));
	for(int i = 0; i < m; ++i)
		for(int j = 0; j < n; ++j)
			if(dfs(board, word, 0, i, j, visited))
				return true;
	return false;

}

int main(){


	char row1[] = {'a', 'b', 'c', 'd'};
	char row2[] = {'a', 'b', 'c', 'd'};
	char row3[] = {'a', 'b', 'c', 'd'};
	char row4[] = {'a', 'b', 'c', 'd'};
	vector<char> v1(row1, row1 + sizeof(row1)/sizeof(char));
	vector<char> v2(row2, row2 + sizeof(row2)/sizeof(char));
	vector<char> v3(row3, row3 + sizeof(row3)/sizeof(char));
	vector<char> v4(row4, row4 + sizeof(row4)/sizeof(char));
	vector<vector<char> > v;
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	bool f = exist(v, "abba");
	cout << f << endl;

}
