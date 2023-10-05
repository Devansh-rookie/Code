#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int max_min(){
    int max,min,n,i;
    cout<<"What is the number of terms in the Array\n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    // Let an element be the max
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    min=arr[0];
        for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Min is: "<<min<<endl;
    return 0;
}

int max_min_anothermethod(){
    int max,min,n,i;
    cout<<"What is the number of terms in the Array\n";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    // Let an element be the max
    max=INT_MIN;// Important method Minimum value possible in INT
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max is: "<<max<<endl;
    min=INT_MAX;//Important method Maximum value possible in INT
        for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Min is: "<<min<<endl;
    return 0;
}



int main(){
    // max_min();
    // max_min_anothermethod();

    
    return 0;
}