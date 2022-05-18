#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
    int mid_point=(s+e)/2;
    if(arr[mid_point]==key)
    {
        return mid_point;
    }
    else if (arr[mid_point]<key)
    {
        s=mid_point+1;
    }
    else
    {
      e=mid_point-1;
    }
    }
    return -1;
}


int main()
{
 int n;
 cin>> n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int key;
 cin>> key;
 cout<<binarysearch(arr,n,key)<<endl;
 return 0;
}
