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


int binarySearch(int arr[],int l,int r,int x){
	if (l<=r)
		int m=(l+(r-1)/2);
	if(arr[m]==x){
		return m;
	}
	if(arr[m]<x)
		l=m-1;
	else
		r=m+1;
	return -1;
}

void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}


}
int main() {
	int arr[]={1,5,8,10,12,14,18,20,33,41};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=10;
	binarySearch(arr,0,n-1,x);
	print(arr,n);
	return 0;

}
