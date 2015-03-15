#include"leetcode.h"

ListNode* swapPairs(ListNode* head){

	ListNode* dummy = new ListNode(-1);
	dummy->next = head;

	ListNode* cur = dummy->next;
	ListNode* preCur = dummy;

	while(cur != NULL){

		ListNode* curNextNext = cur->next->next;
		ListNode* curNext = cur->next;
		preCur->next = curNext;
		curNext->next = cur;
		cur->next = curNextNext;

		cur = cur->next;
		preCur = cur->next;

	}
	return dummy->next;
}

int main(){


	ListNode list1(0);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(2);node1.next = &node2;
	ListNode node3(3);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(5);node4.next = &node5;
	ListNode node6(6);node5.next = &node6;
	
	ListNode* swapped = swapPairs(&list1);
	print(swapped);	
}
