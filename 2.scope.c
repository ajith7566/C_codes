#include<stdio.h> //demonstrate scope of a variable.
int global_variable = 10; // global variable accesible through out the program
void function();
int static_function();

int main(){
    
    int local_variable = 15;// local variable accesible only for a particular block

    printf("local_variable = %d in main()\n", local_variable);
    
    printf("global_variable = %d in main()\n", global_variable);
    
    {
        printf("Local variable in a block = %d\n", local_variable);
    }
    
    {
        int local_block_variable = 5;
        printf("local variable declared inside a block =%d\n", local_block_variable); // not accesible out side this block
    }

    function();// function call
    
    int i=0;
    printf("Static variables  increments : ");
    while(i<3){
        printf("%d ", static_function()); // function call for static variable demonstration.
        i++;
    }
    
    
    return 0;
}

void function(){
    printf("global variable = %d in a function\n", global_variable);
    int funtion_variable = 20;// local variable available only during function call.
    printf("funtion variable = %d in a funtion\n", funtion_variable);
}

int static_function(){
    static int value = 50; // static variable accesible throughout the program
    value++;
    return value;
}



