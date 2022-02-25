// IMPLEMENTATION OF LINEAR SEARCH USING C++ !-----------------------------------------------------------------------------------------


#include<iostream>
using namespace std;
int linearSearch(int arr[], int n,int key)
{
   for(int i=0;i<n;i++)
 {
    if(arr[i]==key)
    {
        return i;
    }
 }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the value of n \n";
    cin>>n;
    int arr[n];
    cout<<"enter array\n";
    for(int i=0;i<n;i++)
    { 
        cin>>arr[i];
    }
    int key;
    cout<<"enter key\n";
    cin>>key;
cout<<linearSearch(arr,n,key);
return 0;

}
