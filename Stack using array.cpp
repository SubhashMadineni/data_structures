#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 101
int Stack[MAXSIZE];
int top = -1;
void print(){
	cout<<"The Stack is...";
	for(int i =0;i<=top;i++){
		cout<<Stack[i]<<" ";
	}
	cout<<"\n";
}
void push(int x){
	if(top == MAXSIZE - 1){
		cout<<"Warning stack-overflown....";
		return;
	}
	Stack[++top] = x;
	print();
}
void pop(){
	if(top == -1){
		cout<<"Error: No element to pop";
		return;
	}
	Stack[top] = 0;
	--top;
	print();
}
bool isEmpty(){
	if(top == -1){
		return true;		
	}else{
		return false;
	}
}
void Top(){
	cout<<"The top of stack is ...."<<Stack[top]<<endl;
}
int main(){
	push(1);
	push(2);
	Top();
	push(3);
	pop();
	push(34);
	push(45);
	pop();
	pop();
	Top();
	int empty = isEmpty();
	pop();
}
