1.my code use recurisive solution
2.the iterative solution can use stack
#include"leetcode.h"

void visit(vector<int>& v, TreeNode* node){

	if(node == NULL)
		return;

	visit(v, node->left);
	visit(v, node->right);
	v.push_back(node->val);
}

vector<int> postorderTraversal(TreeNode* root){

	vector<int> v;
	visit(v, root);
	return v;
}

int main(){

	TreeNode* tree = new TreeNode(1);
	TreeNode* left = new TreeNode(2);tree->left = left;

	vector<int> v = preorderTraversal(tree);
	for(int i = 0; i < v.size(); i++){

		cout << v[i] << ", ";
	}
	cout << endl;
}
