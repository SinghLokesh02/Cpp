#include<bits/stdc++.h>
using namespace std;

void check(int number){
     if(number%2==0){
     cout<<"Di gyi shankhya sum shankhya hai Dhanyawaad\n";
 }
 else{
     cout<<"Di gyi shankhya visum shankhya hai Dhanyawaad\n";

 }
}
// Prime 
int check_prime(int n){
    if(n<=1)return 0;
    int count = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0)count++;
    }
    if(count==2)return 1;

    // cout<<count<<endl;
    return 0;
}


// Function to add 2 numbers
// void sum(int a,int b){
//     cout<<"The sum of given numbers is : "<<a+b<<endl;
// }


// Function Overloading
void sum(int a,int b){
    cout<<"The sum of given numbers is : "<<a+b<<endl;
}
void sum(int a,int b,int c){
    cout<<"The sum of given numbers is : "<<a+b+c<<endl;
}
void sum(int a,int b,int c,int d){
    cout<<"The sum of given numbers is : "<<a+b+c+d<<endl;
}


// Function to add 2 numbers with default parameter
// void sum(int a,int b=0){
//     cout<<"The sum of given numbers is : "<<a+b<<endl;
// }


int main()
{
        // int shankhya
        // cout<<"Kripya koi sankhya de\n";
        // cin>>shankhya;
        // check(shankhya);
        // int arr[10] = {1,2342,3,4,345,634,7,458,9,10};
        // for(int i = 0;i<10;i++){
        //     cout<<arr[i]<<" ";
        //     check(arr[i]);
        // }

        // int prime;
        // cout<<"Enter Any Number to check Prime : ";
        // cin>>prime;
        // int x = check_prime(prime);
        // if(x==1){
        //     cout<<"The number "<<prime<<" is prime"<<endl;
        // }
        // else if(x ==0){
        //     cout<<"The number "<<prime<<" is not prime"<<endl;
        // }

        // Write a function to add two numbers
        int a,b,c,d;
        cout<<"Enter the value of a : ";
        cin>>a;
        cout<<"Enter the value of b : ";
        cin>>b;
        cout<<"Enter the value of c : ";
        cin>>c;
        cout<<"Enter the value of d : ";
        cin>>d;
        sum(a,b);
        sum(a,b,c);
        sum(a,b,c,d);

return 0;
}