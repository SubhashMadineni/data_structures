#include<iostream>
using namespace std;


					//code to insert at nth position in LL
					
					
struct node{
	int data;
	node* next;
};
node* head;
void print(){
	cout<<"the list is...";
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
void Delete(int n){
	node* temp1 = head;
	if(n ==1){
		head = temp1->next;
		delete(temp1);
		print();
		return;
	}
	for(int i =1;i<n-2;i++){
		temp1 = temp1->next;
	}
	node* temp2 = temp1->next;				//copying th address of nth node to free it later
	temp1->next = temp2->next;				//pointing n-1 th nope to n+1 th node
	delete(temp2);							//freeing the nth node
	print();
}

void insert(int x, int n){
	node* temp1 = new node();			cout<<"inserting....";
	temp1->data = x;
	temp1->next = NULL;					//empty box is created not pointing to any where
	
	if(n ==1){							//if inserting at the first position
		temp1->next = head;
		head = temp1;
		print();
		return;
	}
	node* temp2 = head;
	for(int  i = 1;i<n-2;i++){
		temp2 = temp2->next;			//traversing towards the n-1 th node
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
	print();
}
int main(){
	head = NULL;						//empty list with head node is created
	insert(2,1);
	insert(4,2);
	insert(6,3);
	insert(8,4);
	insert(10,5);
	insert(12,6);
	insert(14,7);
	insert(16,8);
	insert(18,9);
	Delete(4);
	Delete(1);
	//print(head);
	return 0;
}
