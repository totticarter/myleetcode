#include<iostream>
using namespace std;

typedef struct Node{
	Node* next_;
	int value_;
	Node(int x): value_(x), next_(NULL){}
} Node;

void print(Node* head){

	Node* next = head;
	while(next->next_ != NULL){

		cout << next->value_ << ", ";
		next = next->next_;
	}
	cout << next->value_ << endl;
}
Node* gotoNode(Node* head, int node_idx){

	int count = 0;
	Node* nextNode = head;
	while(count++ != node_idx){

		nextNode = nextNode->next_;
	}
	return nextNode;
}
void swap(int lnode_idx, Node* lnode, int rnode_idx, Node* rnode){
	
	Node* tmp1
}
Node* reverseKGroup(Node* head, int k){
	
	//Node* tmp1, tmp2;
	Node* next_node = head;
	int node_idx = 0;
	int left_node_idx = 0;
	int right_node_idx = 0;
	int list_size = 0;
	//get size
	while(next_node->next_ != NULL){

		++list_size;
		next_node = next_node->next_;
	}
	list_size++;

	int range = 1;
	while(list_size - k > 0){

		right_node_idx = (k * range) - 1;
		left_node_idx = right_node_idx - (k-1);
		list_size = list_size - k;
		range++;
		cout << "left is: " << left_node_idx << ", right is: " << right_node_idx << endl;
		
	}

}

int main(){

	Node head(0);
	Node node1(1);head.next_ = &node1;
	Node node2(2);node1.next_ = &node2;
	Node node3(3);node2.next_ = &node3;
	Node node4(4);node3.next_ = &node4;
	Node node5(5);node4.next_ = &node5;
	Node node6(6);node5.next_ = &node6;

	Node* one_node = gotoNode(&head, 3);
	cout << "one_node value is: " << one_node->value_ << endl;

	reverseKGroup(&head, 3);
	
	print(&head);


}
