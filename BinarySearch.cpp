#include<iostream>
using namespace std;

int binarySearch(int *,int,int,int);

int main(){
    int n;
    cout<<"How many number you want to entered ?"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter a number in increasing order : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter search element : ";
    cin>>key;
    int ans = binarySearch(arr,0,n-1,key);
    if(ans==-1)
    cout<<"Sorry,not found"<<endl;
    else
    cout<<key<<" is at "<<ans<<" index of array "<<endl;
    return 0;
}

int binarySearch(int *arr,int s,int e,int key){
    if(s>e)
    return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    else
    return binarySearch(arr,s,mid-1,key);
}