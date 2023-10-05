#include<iostream>
#include<climits>// for things like INT_MAX and INT_MIN
#include<math.h>

using namespace std;

int linear_search(){
    int i,key;
    int arr[10]={1,354,2345,2647,23,6,3,4,100,3};
    cout<<"What do you want to search: ";
    cin>>key;
    int flag=0;
    for(i=0;i<10;i++){
        if(arr[i]==key){
            flag=1;
            cout<<key<<" is at index "<<i<<"."<<endl;
        }
    }
    if(flag==0) cout<<key<<" doesn't exist in the array.";
    return 0;
}

int asc_binary_search(){
    int flag=0,key;
    int arr[10]={1,2,10,40,450,1345,234545,3243255,25344532,55325432};
    cout<<"What do you want to search: ";
    cin>>key;
    int s=0;//start
    int e=10;//end basically n
    while(e>=s){// if e would be smaller than s it means that we have already traversed the array and if it equals means that only 1 element is left to check.
        int mid=(e+s)/2;
        if(arr[mid]==key) {// check with the middle element.
            cout<<"The key "<<key<<" is at index "<<mid<<endl;
            flag=1;
            break;
            }
        else if(arr[mid]>key){
            e=mid-1;// now we will check from 0 to mid
            //because array is ascending 
            //and key is smaller than mid
        }
        else{
            s=mid+1;
            //here we will check from mid to end because
            //in this else condition key must be larger than the
            //middle value so we shall check it there.
        }
    }
if(flag==0) cout<<"The key "<<key<<" is not in the array.\n";
return 0;
}


int main(){
    // linear_search();// Time complexity is O(n) 
    //we are traversing the entire array.
    asc_binary_search();

    return 0;
}