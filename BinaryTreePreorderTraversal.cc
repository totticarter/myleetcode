//1.my code use recurisive solution
//2.the iterative solution can use stack
#include"leetcode.h"

void visit(vector<int>& v, TreeNode* node){

	if(node == NULL)
		return;

	v.push_back(node->val);
	if(node->left != NULL){

		visit(v, node->left);
	}
	if(node->right != NULL){

		visit(v, node->right);
	}
}

vector<int> preorderTraversal(TreeNode* root){

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
