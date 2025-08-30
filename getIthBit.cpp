#include<iostream>
using namespace std;
int getithBit(int num, int i){
    if(num&(1<<i)){
        cout<<"ith bit is 1";
    }else{
        cout<<"ith bit is 0";
    }
}
int main(){
    int num=6, i=2;
    getithBit(num, i);
    return 0;
}