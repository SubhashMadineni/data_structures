#include<bits/stdc++.h>
using namespace std;
#define MAXSIZE 101
char Stack[MAXSIZE];
int top = -1;
void print(){
	cout<<"The Stack is...";
	for(int i =0;i<=top;i++){
		cout<<Stack[i]<<" ";
	}
	cout<<"\n";
}

bool isEmpty(){
	if(top == -1){
		return true;		
	}else{
		return false;
	}
}
char Top(){
	return Stack[top];
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


void push(char x){
	if(top == MAXSIZE - 1){
		cout<<"Warning stack-overflown....";
		return;
	}
	Stack[++top] = x;
	print();
}
bool arepair(char opening, char closing){
	if(opening == '[' && closing == ']'){return true;}
	else if(opening == '{' && closing == '}'){return true;}
	else if(opening == '(' && closing == ')'){return true;}
	else{return false;}
}
bool checkbal(string exp){
	for(int i =0;i<exp.length();i++){
		if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[')	push(exp[i]);
		else if(exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){
			if(			isEmpty() 					|| 			!arepair(	Top(), 		exp[i]		)	)	{
				return false;
			}
			else{
				pop();
			}	
		}
	}
	if(isEmpty()){
		return true;
	}else{
		return false;
	}
}


int main(){
	string expression;
	cout<<"enter an expression"<<endl;
	cin>>expression;
	if(checkbal(expression)){
		cout<<"Yes it is balenced...."<<endl;
	}else{
		cout<<"Not balenced...."<<endl;
	}
}
