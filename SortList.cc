#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


ListNode* merge(ListNode* fast, ListNode* slow){

	ListNode* tmp;
	if(fast == NULL)
		return slow;
	if(slow == NULL)
		return fast;
	if(fast->val < slow->val){

		tmp = fast;
		fast = fast->next;
	}else{

		tmp = slow;
		slow = slow->next;
	}
	tmp->next = merge(fast, slow);
	return tmp;
}

ListNode *sortList(ListNode* head){

	ListNode* fast = head;
	ListNode* slow = head;

	if(fast == NULL || slow == NULL)
		return fast;

	while(slow->next != NULL && slow->next->next != NULL){

		fast = fast->next;
		slow = slow->next->next;
	}

	if(fast->next != NULL){

		slow = fast;
		fast = head;
	}

	if(fast == slow)
		return fast;

	return merge(sortList(fast), sortList(slow));
}

void print(ListNode* head){
	ListNode* next = head;
	while(next != NULL){

		cout << next->val << endl;
		next = next->next;

	}
}

int main(){


	ListNode list1(0);
	ListNode node1(1);list1.next = &node1;
	ListNode node2(1);node1.next = &node2;
	ListNode node3(7);node2.next = &node3;
	ListNode node4(4);node3.next = &node4;
	ListNode node5(5);node4.next = &node5;
	ListNode node6(2);node5.next = &node6;


	ListNode* sorted = sortList(&list1);
	print(sorted);


}
