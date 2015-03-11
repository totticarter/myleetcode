/*
1.mycode use additational space, and my code is too long
2.example code, when any of the two list point NULL, put the non-NULL list two the merged list directly
*/

#include<iostream>

using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
	 int val;
	 ListNode *next;
	 ListNode(int x) : val(x), next(NULL) {}
 };

void print(ListNode* head){
	ListNode* next = head;
	while(next != NULL){

		cout << next->val << endl;
		next = next->next;

	}
//	cout << next->val << endl;
}


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){


	ListNode* current_node = new ListNode(0);
	ListNode* head = current_node;
	while(l1 != NULL || l2 != NULL){

		bool all_not_null = l1 != NULL && l2 != NULL;
		if(all_not_null &&  l1->val < l2->val){

			ListNode* new_node = new ListNode(l1->val);
			current_node->next = new_node;
			current_node = new_node;
			l1 = l1->next;
		}else if(all_not_null && l1->val == l2->val){

			ListNode* new_node1 = new ListNode(l1->val);
			ListNode* new_node2 = new ListNode(l2->val);
			
			current_node->next = new_node1;
			current_node = new_node1;
			current_node->next = new_node2;
			current_node = new_node2;

			l1 = l1->next;
			l2 = l2->next;
		}else if(all_not_null){

			ListNode* new_node = new ListNode(l2->val);
			current_node->next = new_node;
			current_node = new_node;
			l2 = l2->next;
		}else if(l1 == NULL){

			ListNode* new_node = new ListNode(l2->val);
			current_node->next = new_node;
			current_node = new_node;
			l2 = l2->next;
		}else if(l2 == NULL){

			ListNode* new_node = new ListNode(l1->val);
			current_node->next = new_node;
			current_node = new_node;
			l1 = l1->next;
		}
	}
	return head->next;
}

int main(){


	ListNode list1(0);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(1);node1.next = &node2;
	ListNode node3(3);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(5);node4.next = &node5;
	ListNode node6(6);node5.next = &node6;


	ListNode list2(0);
	ListNode node21(1);list2.next = &node21;
	ListNode node22(2);node21.next = &node22;
	ListNode node23(3);node22.next = &node23;
	ListNode node24(4);node23.next = &node24;
//	ListNode node25(5);node24.next = &node25;
//	ListNode node26(6);node25.next = &node26;

	ListNode* newlist = mergeTwoLists(&list1, &list2);
	print(newlist);
	
}
