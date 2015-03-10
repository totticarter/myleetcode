#include<iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

void print(ListNode* head){

	ListNode* next = head;
	while(next->next!= NULL){

		cout << next->val << ", ";
		next = next->next;
	}
	cout << next->val << endl;
}
ListNode* gotoNode(ListNode* head, int node_idx){

	int count = 0;
	ListNode* nextNode = head;
	while(count++ != node_idx){

		nextNode = nextNode->next;
	}
	return nextNode;
}
ListNode* swap(ListNode* head, int lnode_idx, ListNode* lnode, int rnode_idx, ListNode* rnode){

	ListNode* l_pre = NULL;
	if(lnode_idx == 0){

		l_pre = NULL;
	}else{

		l_pre = gotoNode(head, lnode_idx-1);
	}

	ListNode* r_pre = gotoNode(head, rnode_idx - 1);

	ListNode* rnode_next= rnode->next;
	if(l_pre == NULL){

		rnode->next = lnode->next;
		head = rnode;
	}else{

		l_pre->next = rnode;
		rnode->next = lnode->next;
	}
	
	r_pre->next = lnode;
	lnode->next = rnode_next;

	return head;
}
ListNode* reverseKGroup(ListNode* head, int k){
	
	if(head == NULL)
		return NULL;

	ListNode* next_node = head;
	int node_idx = 0;
	int left_node_idx = 0;
	int right_node_idx = 0;
	int list_size = 0;
	//get size
	while(next_node->next != NULL){

		++list_size;
		next_node = next_node->next;
	}
	list_size++;
	if(list_size < k)
		return head;

	int range = 1;
	ListNode* new_head =  head;
	while(list_size - k > 0){

		right_node_idx = (k * range) - 1;
		left_node_idx = right_node_idx - (k-1);
		list_size = list_size - k;
		range++;
		cout << "left is: " << left_node_idx << ", right is: " << right_node_idx << endl;

		while(left_node_idx  < right_node_idx){

			ListNode* left_node = gotoNode(new_head, left_node_idx);
			ListNode* right_node = gotoNode(new_head, right_node_idx);
			new_head = swap(new_head, left_node_idx, left_node, right_node_idx, right_node);
			print(new_head);
			left_node_idx++;
			right_node_idx--;
		}
		
	}

//	print(new_head);
}

int main(){

	ListNode head(0);
	ListNode node1(1);head.next = &node1;
	ListNode node2(2);node1.next = &node2;
//	ListNode node3(3);node2.next = &node3;
//	ListNode node4(4);node3.next = &node4;
//	ListNode node5(5);node4.next = &node5;
//	ListNode node6(6);node5.next = &node6;

	reverseKGroup(&head, 2);

}
