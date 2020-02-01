#include<stdio.h>
int max=100000;
int arr[100000];
int cnt=-1;
void push(int a){
    if(cnt<=max){
        cnt++;
        arr[cnt]=a;
    }
}
void pop(){
    if(cnt>=0){
        cnt--;
    }
}
int top(){
    if(cnt>=0){
        return arr[cnt];
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    top();
    pop();
    pop();
    top();
    return 0;
}
