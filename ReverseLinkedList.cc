//my code try to swap m and n while(! (m++ < n--))
//example code insert the element from m to the head

#include"leetcode.h"

ListNode* reverseBetween(ListNode* head, int m, int n){

	int count = 0;
	ListNode* pre_mnode = head;
	while(count++ < m){

		pre_mnode = pre_mnode->next;
	}

	ListNode* mnode = pre_mnode->next;
	ListNode* cur = mnode->next;

	for(int i = m; i < n; i++){


	}

//	ListNode dummy(-1);
//	dummy.next = head;
//	ListNode *prev = &dummy;
//	for (int i = 0; i < m - 1; ++i)
//		prev = prev->next;
//	ListNode* const head2 = prev;
//	prev = head2->next;
//	ListNode *cur = prev->next;
//	for (int i = m; i < n; ++i) {
//		prev->next = cur->next;
//		cur->next = head2->next;
//		head2->next = cur; // 头插法
//		cur = prev->next;
//	}
//	return dummy.next;
}

int main(){

	ListNode list1(0);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(2);node1.next = &node2;
	ListNode node3(3);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(5);node4.next = &node5;
	ListNode node6(6);node5.next = &node6;

	ListNode* newl = reverseBetween(&list1, 2, 5);
	print(newl);
}
