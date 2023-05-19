#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void quickSort(int *,int ,int);
int partition(int *,int ,int);
int main(){
    int n;
    cout<<"How many numbers you want enter ? "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" number in array "<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    quickSort(arr,0,n-1);
    cout<<"Sorted array :: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"   ";
    return 0;
}

void quickSort(int *arr,int s,int e){
    //Base Case
    if(s>=e)
    return;
    //Partition
    int p=partition(arr,s,e);
    //Sorting left part
    quickSort(arr,s,p-1);
    //Sorting right part
    quickSort(arr,p+1,e);
}

int partition(int *arr,int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot)
        cnt++;
    }
    int pivotIndex=s+cnt;
    swap(arr[s],arr[pivotIndex]);
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot)
        i++;
        while(arr[j]>pivot)
        j--;
        if(i<pivotIndex && j>pivotIndex)
        swap(arr[i++],arr[j--]);
    }
    return pivotIndex;
}