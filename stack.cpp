#include<iostream>
using namespace std;
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        cout<<"Stack Overflow! Cannot push  to the stack\n"<< val;
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
       
        cout<<"Stack Underflow! Cannot push  to the stack\n";
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    cout<<"Stack has been created successfully\n";
    cout<<"Before pushing, Full:"<< isFull(sp)<<endl;
    cout<<"Before pushing, Empty:"<< isEmpty(sp)<<endl;
    
    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the sizek of the stack is 10
    cout<<"After pushing, Full:  "<< isFull(sp) <<endl;
    cout<<"After pushing, Empty: "<< isEmpty(sp)<<endl;
    cout<<"Popped  from the stack   "<< pop(sp)<<endl; // --> Last in first out!
    cout<<"Popped  from the stack   "<< pop(sp)<<endl; // --> Last in first out!
    cout<<"Popped  from the stack   "<< pop(sp)<<endl; // --> Last in first out!
 
    return 0;
}


