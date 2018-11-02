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

void merge(int arr[],int l,int r, int m){
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int L[n1],R[n2];
	for(i=0;i<n1;i++){
		L[i]=arr[i+1];
	}
	for(j=0;j<n2;j++){
		R[j]=arr[m+j+1];
	}
	while(i<n1 && j<n2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
		}
	k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
	}
}
void ExamSort(int arr[],int l,int r){
	if (l<r){
		int m = l+(r-1)/2;

ExamSort(arr,l,m);
ExamSort(arr,m+1,r);
merge(arr,l,m,r);
}
}

void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}


}
int main() {
	int arr[]={15,9,60,44,12,1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	ExamSort(arr,0,n-1);
	print(arr,n);
	return 0;
}
