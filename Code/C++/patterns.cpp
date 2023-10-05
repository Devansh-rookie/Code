#include<iostream>
using namespace std;


void rectangle(){
    int rows,columns,i,j;
    // std::cin>>n;
    cout<<"Rows Columns"<<endl;//or \n can be used
    cin>>rows>>columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void hollow_rectangle(){
    int i,j,rows,columns;
    cout<<"Rows Columns\n";//to print variable do, "something"<<a <<" something"
    cin>>rows>>columns;
    for(i=1;i<=rows;i++){//rows
        for(j=1;j<=columns;j++){//columns
            if(i==1||i==rows||j==1||j==columns){
               cout<<"*"; 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void inverted_pattern(){
    int n,i,j,k=1;
    printf("Rows:\n");//printf can also be used here like in C
    cin>>n;

    for(i=1;i<=n;i++){
        k=1;
        for(j=n;j>=i;j--){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}

void _0_1_pattern(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0) cout<<"1";// 1 at even index and 0 at odd
            else cout<<"0";// if one line statements no need of
            //curly braces/brackets
        }
        cout<<endl;
    }

}

void zig_zag(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            if((i+j)%4==0||i==2&&j%4==0){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }

}

int fact(int num){
    int facto=1,i;
    for(i=1;i<=num;i++){
        facto=facto*i;
    }
    return facto;
}
int nCr(int n,int r){
    int combi=1;
    combi =fact(n)/(fact(n-r)*fact(r));
    return combi;    
}
//1
//11
//121
//1331
//14641
// just print iCj there
void pascal_triangle(){
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<" ";
    }
    cout<<"1\n";
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            cout<<" ";
        }
        cout<<"1 ";
        for(j=1;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
}

//Memory Stack frame Active Stack popped stack etc.

int main(){

    // rectangle();
    // hollow_rectangle();
    // inverted_pattern();
    // _0_1_pattern();
    // zig_zag();
    // pascal_triangle();

    return 0;
}

// Revise the Functions Questions Video from Apna College