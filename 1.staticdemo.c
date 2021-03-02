#include<stdio.h>
int staticdemo();

int main(){
    int i=0;
    //calling the function 4 times in a loop.
    while(i<4){
        printf("%d\n",staticdemo());
        i++;
    }
}

// value of a increments by 4 each time the funtion is called
int staticdemo(){
    static int a = 4;
    a = a+4; 
    return a;
}