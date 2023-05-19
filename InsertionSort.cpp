#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i],j;
        for(j=i-1;j>=0;j--){
            if(temp<arr[j])
            arr[j+1] = arr[j];
            else 
            break;
        }
        arr[j+1]=temp;
    }
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter a number for sorting "<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    insertionSort(arr,n);
    cout<<"Sorting element ::  "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";
    return 0;
}