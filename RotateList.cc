//my code cannot process when k is larger than the length of the list

#include"leetcode.h"

ListNode *rotateRight(ListNode *head, int k){

	if(head == NULL)
		return NULL;
	if(head->next == NULL || k == 0)
		return head;

	ListNode dummy(-1);
	dummy.next = head;

	ListNode *first = head;
	ListNode *firstPre = &dummy;
	ListNode *second = head;
	ListNode *secondPre = &dummy;

	int count = 0;
	while(first != NULL){

		firstPre = first;
		first = first->next;
		if(++count > k){

			secondPre = second;
			second = second->next;
		}
	}
	if(count == k)
		return head;
	else if(count < k)
		k = k%len;

	secondPre->next = NULL;
	dummy.next = second;
	firstPre->next = head;
	firstPre = NULL;
	return dummy.next;
}

int main(){

//	ListNode list1(1);
//	ListNode node1(2);list1.next = &node1;
//	ListNode node2(3);node1.next = &node2;
//	ListNode node3(4);node2.next = &node3;
//	ListNode node4(5);node3.next = &node4;
//	ListNode *newList = rotateRight(&list1, 2);
//	print(newList);

//	ListNode list1(1);
//	ListNode *newList = rotateRight(&list1, 1);
//	print(newList);

	ListNode list1(1);
	ListNode node1(2);list1.next = &node1;
	ListNode *newList = rotateRight(&list1, 0);
	print(newList);


}
