#include"leetcode.h"

ListNode* deleteDuplicates(ListNode* head){

	ListNode* oneNode = head;
	ListNode dummy(-1);
	ListNode *newList = &dummy;
	int lastValue = head->val;
	while(oneNode != NULL){

		if(oneNode->val == lastValue && oneNode != head){

			oneNode = oneNode->next;
		}else{

			ListNode *newNode = new ListNode(oneNode->val);
			newList->next = newNode;	
			newList = newList->next;
			lastValue = oneNode->val;
			oneNode = oneNode->next;
		}

	}
	return dummy.next;
	
}

int main(){

	ListNode list1(1);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(2);node1.next = &node2;
	ListNode node3(2);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(6);node4.next = &node5;
	ListNode node6(6);node5.next = &node6;
	print(&list1);

	ListNode *n = deleteDuplicates(&list1);
	print(n);
}
