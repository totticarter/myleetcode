#include"leetcode.h"

//space cost O(n), time cost O(n);
//ListNode* deleteDuplicates(ListNode* head){
//
//	if(head == NULL)
//		return NULL;
//	ListNode* oneNode = head;
//	ListNode dummy(-1);
//	ListNode *newList = &dummy;
//	int lastValue = head->val;
//	while(oneNode != NULL){
//
//		if(oneNode->val == lastValue && oneNode != head){
//
//			oneNode = oneNode->next;
//		}else{
//
//			ListNode *newNode = new ListNode(oneNode->val);
//			newList->next = newNode;
//			newList = newList->next;
//			lastValue = oneNode->val;
//			oneNode = oneNode->next;
//		}
//
//	}
//	return dummy.next;
//
//}


ListNode* deleteDuplicates(ListNode* head){

	if(head == NULL)
		return NULL;

	//this is my code, my code use too many var and most of them are unuseful
	//ListNode dummy(-1);
	//dummy.next = head;
	//ListNode* oneNode = head;
	//ListNode* oneNodePre = &dummy;

	//ListNode* insertPosPre = head;
	//ListNode* insertPos = head->next;
	//int lastValue = head->val;
	//while(oneNode != NULL){

	//	if(oneNode->val == lastValue || oneNode->next == NULL){

	//		oneNodePre = oneNode;
	//		oneNode = oneNode->next;

	//	}else{
	//		
	//		ListNode* tmpOneNode = oneNode->next;
	//		ListNode* tmpOneNodePre = oneNodePre;

	//		oneNodePre->next = oneNode->next;
	//		insertPosPre->next = oneNode;
	//		oneNode->next = insertPos;

	//		oneNode = tmpOneNode;
	//		oneNodePre = tmpOneNodePre;
	//		lastValue = oneNode->val;
	//		print(head);
	//	}
	//}

	//return dummy.next;

	ListNode* prev = head;
	ListNode* cur = head->next;
	while(cur != NULL){

		if(prev->val == cur->val){

			prev->next = cur->next;
//			delete cur;
		}else{
	
			prev = cur;
		}
		cur=cur->next;
	}
	
	return head;
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
