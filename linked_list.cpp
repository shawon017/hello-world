/*
 * linked_list.cpp
 *
 *  Created on: Mar 12, 2016
 *      Author: np
 */

#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;

};

Node* Insert(Node* head, int x){
	struct Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(head != NULL) temp-> next = head;

	head = temp;
	return head;
}
void Print (Node* head){
	cout << "List: ";
	while(head != NULL){
		cout << head-> data;
		head = head-> next;

	}
	cout << endl;
}
void InsertN(int y, int x, Node* head){
	Node* temp = new Node;
	temp->data = y;
	temp->next = NULL;
	for(int i = 1; i < x; i++){
		temp->next = head;

	}
	temp->next = head->next;
	head = temp;
}
void Delete(int n, Node* head){
	struct Node* temp1 = head;
	for(int i = 1; i< n; i++){
		temp1 = temp1->next;
	}
	free(temp1);
	return;
}
int main(){
	Node* head= NULL;
	cout << "How many numbers: " << endl;
	int x,n,i;
	cin>> n;
	for(i = 0; i < n; i++){
		cout << "Enter a number: " << endl;
		cin >> x;
		head = Insert (head, x);
		Print(head);


	}
	InsertN(6, 3, head);
	Print(head);
	/*int d;
			cin >> d;
			Delete(d, head);
			Print(head);*/
}



