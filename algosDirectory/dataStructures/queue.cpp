#include<iostream>
#define SIZE 100
using namespace std;
 
class QUEUE{
    private:
        int queue[SIZE];
        int back;

    public:
        QUEUE();
        int push(int);
        int pop();
        int isEmpty();
        int isFull();
        int qSize();
        int displayItems();
};

QUEUE::QUEUE(){
    back = -1;
}

int QUEUE::isEmpty(){
    if (back==-1){
        return 1;
    }
    return 0;
}

int QUEUE::isFull(){
    if (back==(SIZE-1)){
        return -9999;
    }
    return 0;
}

int QUEUE::qSize(){
    return back+1;
}

int QUEUE::push(int n){
    if (isFull()){
        return 0;
    }
    back++;
    queue[back] = n;

    return 1;
}

int QUEUE::pop(){
    if (isEmpty()){
        return 0;
    }
    int popped = queue[0];
    for (int i=0;i<qSize()-1;i++){
        queue[i] = queue[i+1];
    }
    queue[qSize()-1] = '\0';
    return popped;
}


int QUEUE::displayItems(){
    cout<<"Queue size: "<< qSize()<< endl;
    if( isEmpty()){
        return 0;
    }
    for (int i=qSize()-1; i>-1; i--){
        cout<<queue[i]<<" ";
    }
    
    cout<<endl;
    return 1;
}

int main(){
    QUEUE qu;

    qu.push(1);
    qu.push(13);
    qu.push(331);
    qu.push(2);
    qu.push(50);
    qu.push(71);
    qu.push(15);
    qu.push(67);

    qu.displayItems();

    cout<<"Pop: "<<qu.pop()<< endl;
    cout<<"Pop: "<<qu.pop()<< endl;
    cout<<"Pop: "<<qu.pop()<< endl;
    cout<<"Pop: "<<qu.pop()<< endl;
    // cout<<"Pop: "<<qu.pop()<< endl;
    // cout<<"Pop: "<<qu.pop()<< endl;


qu.displayItems();

    return 0;
}