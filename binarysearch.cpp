# include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
    int s = 0; 
    int e = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if (arr[mid] =key){
            return key;
        }
        else if (arr[mid] > key){
            e  = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
        return -1;
}
int main(){
    int n;
    cout << "enter n :";
    cin>>n;
    int arr[n];
    cout<<"enter array"<<endl;
    for(int i=0; i<=n; i++){
        cin>>arr[i];

    }
    int key ;
    cout<<"enter key value: ";
    cin>>key;
    cout<<binarysearch(arr ,n ,key)<<endl;
    return 0;

}