#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<unordered_map>
using namespace std;
#define MIN(a, b) (a)>(b) ? (b):(a)
#define MAX(a, b) (a)<(b) ? (b):(a)

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode{

	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}
};


void print(ListNode* head){

	ListNode* next = head;
	while(next->next!= NULL){

		cout << next->val << ", ";
		next = next->next;
	}
	cout << next->val << endl;
}
ListNode* gotoNode(ListNode* head, int node_idx){

	int count = 0;
	ListNode* nextNode = head;
	while(count++ != node_idx){

		nextNode = nextNode->next;
	}
	return nextNode;
}
