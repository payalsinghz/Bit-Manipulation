#include<iostream>
using namespace std;
int countSetBIts(int num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num=num/10;;
    }
    return sum;
}
int main(){
    cout<<countSetBIts(10101);
}