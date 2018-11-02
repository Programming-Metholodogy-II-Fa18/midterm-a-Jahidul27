//============================================================================
// Name        : Exam.cpp
// Author      : Jahidul islam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;


class Stack{
	int top;
	int index;
public:
	int a[MAX];
	Stack(){
		top=-1;
	}
	bool add(int x);
	int remove();
	void getValue();
};
bool Stack::add(int x){
	if(top>=MAX-1)
		return false;
	else
		a[++top]=x;
		return true;
}
int Stack::remove(){
	if(top<0)
		return 0;
	else
		int x=a[top--];
}
void Stack::getValue(){
	return index;
}

void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}


}
int main() {
	struct Stack s;
	s.add(1);
	s.add(9);
	s.add(4);
	s.add(5);
	s.add(10);
	s.add(0);
	s.getValue(0);
	s.getValue(3);

}
