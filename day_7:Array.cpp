/*Objective
Today, we will learn about the Array data structure. Check out the Tutorial tab for learning materials and an instructional video.

Task
Given an array, , of  integers, print 's elements in reverse order as a single line of space-separated numbers.

Example


Print 4 3 2 1. Each integer is separated by one space.

Input Format

The first line contains an integer,  (the size of our array).
The second line contains  space-separated integers that describe array 's elements.

Constraints

Constraints

, where  is the  integer in the array.
Output Format

Print the elements of array  in reverse order as a single line of space-separated numbers.

Sample Input

4
1 4 3 2
 Sample Output
*/
//output coding----------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,i,j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

