#include"leetcode.h"

ListNode *removeNthFromEnd(ListNode *head, int n){

	ListNode dummy(-1);
	dummy.next = head;

	ListNode *fast = head;
	ListNode *slow = head;
	int count = 0;
	
	while(fast != NULL){

		fast = fast->next;
		if(++count > n){
		
			slow = slow->next;
		}
	}

	print(slow);

}

int main(){


}
