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
	while(next->next != NULL){

		next = next->next;
	}
	cout << next->val << endl;
}


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){


	ListNode* current_node = new ListNode(0);
	ListNode* head = current_node;
	while(l1->next != NULL || l2->next != NULL){

		if(l1 != NULL && l2 != NULL &&  l1->val < l2->val){

			ListNode* new_node = new ListNode(l1->val);
			current_node->next = new_node;
			current_node = new_node;
			l1 = l1->next;
		}else if(l1 != NULL && l2 != NULL && l1->val == l2->val){

			ListNode* new_node1 = new ListNode(l1->val);
			ListNode* new_node2 = new ListNode(l2->val);
			
			current_node->next = new_node1;
			current_node = new_node1;
			current_node->next = new_node2;
			current_node = new_node2;

			l1 = l1->next;
			l2 = l2->next;
		}else if(l1 != NULL && l2 != NULL){

			ListNode* new_node = new ListNode(l2->val);
			current_node->next = new_node;
			current_node = new_node;
			l2 = l2->next;
		}else{

		}
	}
	return head->next;
}

int main(){


	ListNode list1(0);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(2);node1.next = &node2;
	ListNode node3(3);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(5);node4.next = &node5;
	ListNode node6(6);node5.next = &node6;

	ListNode* newlist = mergeTwoLists(&list1, &list1);
	print(newlist);
	
}
