//link tham khảo:
#include <stdio.h>

int top = -1;

bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}

bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full!");
    }else{
        ++top;
        stack[top] = value;
    }
}

void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty!");
    }else{
        --top;
    }
}


int Top(int stack[]){
    return stack[top];
}

int Size(){
    return top + 1;
}

int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    // Thêm phần tử 5 vào stack.
    Push(stack, 5, capacity); 
    
    printf("\nKích thước hiện tại của stack là %d", Size());
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    printf("\nKích thước hiện tại của stack là %d", Size());
    
    // Vì stack đã đầy, thêm phần tử tiếp theo sẽ gây ra tình trạng tràn stack.
    Push(stack, 12, capacity); 
    
    // Truy cập phần tử đầu tiên trong stack
    printf("\nPhần tử đầu tiên hiện tại trong stack là %d", Top(stack));
    
    // Loại bỏ tất cả các phần tử trong stack
    for(int i = 0 ; i < 3;i++)
        Pop();
    printf("\nKích thước hiện tại của stack là %d", Size());
    
    // Vì stack rỗng, loại bỏ phần tử sẽ gây ra tình trạng stack bị tràn.
    Pop();  
}
