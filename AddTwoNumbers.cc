#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

	int jinwei = 0;
	ListNode dummy(-1);
	ListNode* newNode = &dummy; 
	while(l1 != NULL && l2 != NULL){

		int sum = l1->val + l2->val + jinwei;
		newNode->next = new ListNode(sum%10);
		newNode = newNode->next;
		jinwei = sum > 9 ? 1 : 0; 
	}
	ListNode* non_null_list = l1 != NULL ? l1 : l2;
	non_null_list->val = non_null_list->val + jinwei;
	newNode->next = non_null_list;

	return dummy->next;
}

int main(){

	ListNode list1(4);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(1);node1.next = &node2;
	ListNode node3(7);node2.next = &node3;

	ListNode list2(3);
	ListNode node21(4);list2.next = &node21;
	ListNode node22(1);node21.next = &node22;


}


