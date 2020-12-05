#include<iostream>
using namespace std;
//creating templete for the node data-structure

struct node{
	int data;
	node* next;
};
node* head;								//make the head variable global sothat you can access it from anywhere
void print(node* head){
	struct node* temp = head;				// you create temporory variable  to store the head value 
	cout<<"List is : ";
	while(temp != NULL){
		cout<<temp->data<<" ";				// you print the data in the box and point  to next box....
		temp = temp->next;
	}
	cout<<"\n";
}
void insert(int x){
	cout<<"inserting....";
	node* temp = new node();				//creating a new node........  meanig one new-box
	cout<<"node created...";
	temp->data = x;							//writing data into it
	temp->next = head;						//adjusting the links in it....new box points to bogie first and then................. engine points to new boxto engine
	head = temp;
	cout<<"insert done....";
	print(head);
}

int main() { 
	head = NULL; 						//make the head value  NULL...its value gets kep on coping till the last node..
	int var = 1;
	insert(var);
	insert(78);
	insert(8);
	insert(788);						//advantage of LL you dont say any size here you keep on inserting as much as you can
	insert(5);							//memory is allocated in pieces one box at one place another box at another place and so on....
	insert(0);
	insert(348);
	return 0;
	
}
	
