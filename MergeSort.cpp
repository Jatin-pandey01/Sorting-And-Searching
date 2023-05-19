#include<iostream>

using namespace std;
void merge(int *arr,int s,int e);
void mergeSort(int *arr,int s,int e);

void mergeSort(int *arr,int s,int e){
    //Base case
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    //Left part sort
    mergeSort(arr,s,mid);
    //Right part sort
    mergeSort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}

void merge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid+1-s;
    int len2=e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    //Copy value
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    //merge 2 sorted Array
    int index1=0,index2=0;
    mainArrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2])
        arr[mainArrayIndex++]=first[index1++];
        else
        arr[mainArrayIndex++]=second[index2++];
    }
    while(index1<len1)
    arr[mainArrayIndex++]=first[index1++];
    while(index2<len2)
    arr[mainArrayIndex++]=first[index2++];
    delete[] first;
    delete[] second;
}

int main(){
    int n;
    printf("How many numbers you want to insert\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a number in an array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    mergeSort(arr,0,n-1);
    printf("Sorted array :: \n");
    for(int i=0;i<n;i++)
    printf("%d   ",arr[i]);
    return 0;

}