#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* link;
};
node* top;
void print(node* top){
	node* temp = top;				// you create temporory variable  to store the head value 
	cout<<"List is : ";
	while(temp != NULL){
		cout<<temp->data<<" ";				// you print the data in the box and point  to next box....
		temp = temp->link;
	}
	cout<<"\n";
}
void push(int x){
	cout<<"Pushing... ";
	node* temp = new node();				//new node is created
	temp->data = x;
	temp->link = top;
	top=temp;
	print(top);
}
void pop(){
	cout<<"poping.....";
	node* temp = new node();
	temp = top;
	top = temp->link;
	delete(temp);
	print(top);
}
void Top(){
	node* temp = top;	
	cout<<"Top : "<<temp->data<<endl;
}
void isEmpty(){
	if(top == NULL){
		cout<<"YES.....the stack is empty"<<endl;
	}
	else{
		cout<<"NO.....the stack is not empty"<<endl;
	}
}
int main(){
	top = NULL;
	isEmpty();
	push(1);
	push(2);
	Top();
	isEmpty();
	push(3);
	pop();
	push(34);
	push(45);
	push(643);
	push(5);
	push(7);
	push(36);
	push(64);
	push(18);
	pop();
	pop();
	Top();
	isEmpty();
	pop();
	
}
