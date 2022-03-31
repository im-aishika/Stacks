/*   Implement Stack using an array   */

#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
private:
    int top = -1;
    int arr[MAX];
public:
    void push(int x){
        //if the stack is full, do not do anything
        if(top >= MAX) return;
        top ++;
        arr[top] = x;
    }
    
public:
    int pop(){
        //check if the stack is empty or not. If empty, return -1
        if(top == -1){
            return -1;
        }
        
        int x =  arr[top];
        top --;
        return x;
    }
public:
    int Top(){
        if(top == -1) return -1;
        return  arr[top];
    }
public:
    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    
    /* sample driver code
    Stack st;
    st.push(10);
    st.push(4);
    st.push(6);
    cout << st.Top() << endl;
    cout << st.pop() <<endl;
    cout << st.pop() <<endl;
    cout << st.Top() <<endl;
    st.push(1);
    cout << st.Top();
    */
    
    return 0;
}
