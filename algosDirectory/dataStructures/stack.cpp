#include<iostream>
#define SIZE 100
using namespace std;
 
class STACK{
    private:
        int stack[SIZE];
        int top;
    public:
        STACK();
        int push(int);
        int pop();
        int isEmpty();
        int isFull();
        int stckSize();
        int displayItems();
};

STACK::STACK(){
    top = -1;
}

int STACK::isEmpty(){
    if (top==-1){
        return 1;
    }
    return 0;
}

int STACK::isFull(){
    if (top==(SIZE-1)){
        return -9999;
    }
    return 0;
}

int STACK::stckSize(){
    return top+1;
}

int STACK::push(int n){
    if (isFull()){
        return 0;
    }
    top++;
    stack[top] = n;

    return 1;
}

int STACK::pop(){
    if (isEmpty()){
        return 0;
    }
    top--;
    return stack[top+1];
}


int STACK::displayItems(){
    cout<<"Stack size: "<< stckSize()<< endl;
    if( isEmpty()){
        return 0;
    }
    for (int i=stckSize()-1; i>-1; i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
    return 1;
}

int main(){
    STACK stk;

    stk.push(1);
    stk.push(13);
    stk.push(331);
    stk.push(2);
    stk.push(50);
    stk.push(71);
    stk.push(15);
    stk.push(67);

    stk.displayItems();

    cout<<"Pop: "<<stk.pop()<< endl;
    cout<<"Pop: "<<stk.pop()<< endl;
    cout<<"Pop: "<<stk.pop()<< endl;
    cout<<"Pop: "<<stk.pop()<< endl;
    cout<<"Pop: "<<stk.pop()<< endl;
    cout<<"Pop: "<<stk.pop()<< endl;


stk.displayItems();

    return 0;
}