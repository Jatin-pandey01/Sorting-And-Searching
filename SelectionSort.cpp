#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr,int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[i],arr[minIndex]);
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
    selectionSort(arr,n);
    cout<<"Sorting element ::  "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<"  ";
    return 0;
}