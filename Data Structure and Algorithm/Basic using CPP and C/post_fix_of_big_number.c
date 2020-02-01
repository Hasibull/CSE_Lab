#include<stdio.h>
#include<string.h>

int max=10000;
int arr[10000];
int cnt=-1;
void push(int data){
    if(cnt<=max){
        cnt++;
        arr[cnt]=data;
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
    char ch[100][10];
    int n,len=0,num=0,b=0,c=0;

    scanf("%d",&n);
    getchar();
    for(int i=0; i<n; i++){
        scanf("%s",ch[i]);
        if((strcmp(ch[i],"+")!=0) && (strcmp(ch[i],"-")!=0) && (strcmp(ch[i],"*")!=0) && (strcmp(ch[i],"/")!=0)){
            len=strlen(ch[i]);
            for(int j=0; j<len; j++){
                num=(num*10)+(ch[i][j]-48);
            }
            push(num);
            num=0;
        }
        else if((strcmp(ch[i],"+")==0)){
            b=top();
            pop();
            c=top();
            pop();
            push(b+c);
        }
        else if((strcmp(ch[i],"-")==0)){
            b=top();
            pop();
            c=top();
            pop();
            push(b-c);
        }
        else if((strcmp(ch[i],"*")==0)){
            b=top();
            pop();
            c=top();
            pop();
            push(b*c);
        }
        else if((strcmp(ch[i],"/")==0)){
            b=top();
            pop();
            c=top();
            pop();
            push(b/c);
        }
    }
    printf("%d\n",top());
    return 0;
}
