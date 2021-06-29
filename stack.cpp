#include "stack.h"

stack::stack(){
    top_ = -1;
    return;
}

void stack::push(cube c){

    if(top_ >= (MAX-1)){
        std::cout << "Stack Overflow" << std::endl;
    }
    else{
        cubes_[++top_] = c;
    }
    return;
}

cube stack::pop(){

    cube c = cube(0);

    if (top_ < 0){
        std::cout << "Stack underflow" << std::endl;
    }
    else{
        c = cubes_[top_--];
    }
    return c;
}

bool stack::isEmpty(void){
    return (top_ < 0);
}

int stack::peek(void){

    return cubes_[top_].getLength();
}

void stack::displayStack(void){

    int i = top_;

    if(i <= 0){
        std::cout << "Empty Stack" << std::endl;
        return;
    }
    else{
        while (i>=0){
            std::cout << cubes_[i].getLength() << std::endl;
            i--;      
         }
         return;
    }
}

