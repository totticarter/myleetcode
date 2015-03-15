#include"leetcode.h"

ListNode* partition(ListNode* head, int x){

	int count = 0;
	ListNode* firstLess = head;
	while(!(firstLess->val < x)){
		
		firstLess = firstLess->next;
	}	

	ListNode* prev = firstLess->next;
	if(prev->next)
	ListNode* cur = prev->next;

	while(cur != NULL){
	
		if(cur->val < x){

			prev->next = cur->next;
			cur->next = firstLess->next;
			firstLext->next = cur;
			cur = prev->next;
			prev = cur->next;
		}else{

			cur = cur->next;
			prev = cur->next;
		}
	}

}

int main(){


}
