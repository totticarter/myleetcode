#include"leetcode.h"

ListNode* partition(ListNode* head, int x){

	ListNode dummy(-1);
	dummy.next = head;

	ListNode* insertPos = head->next;
	ListNode* insertPosPre = head;
	ListNode* oneNode = head;
	ListNode* oneNodePre = &dummy;
	while(oneNode != NULL){

		if(oneNode->val < x){
	
			if(oneNode == head){

				oneNodePre = oneNode;
				oneNode = oneNode->next;
			}else{

				//store nodeNode->next to update oneNode later
				ListNode* tmp = oneNode->next;
				ListNode* tmpPre = oneNodePre;
				
				//put oneNode to insert position;
				oneNodePre->next = oneNode->next;
				insertPosPre->next = oneNode;
				oneNode->next = insertPos;
				
				//update insert position
				insertPosPre = oneNode;
				insertPos = oneNode->next;

				//upate oneNode;
				oneNode = tmp;
			}
		}else{
		
			oneNodePre = oneNode;
			oneNode = oneNode->next;
		}
	}
	
}

int main(){


	ListNode list1(1);
	ListNode node1(4);list1.next = &node1;
	ListNode node2(3);node1.next = &node2;
	ListNode node3(2);node2.next = &node3;
	ListNode node4(5);node3.next = &node4;
	ListNode node5(2);node4.next = &node5;
	print(&list1);

	ListNode* n = partition(&list1, 3);
	print(n);

}
