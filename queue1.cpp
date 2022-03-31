/*    Impementation of Queues using array     */

#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

/* if you have a definite capacity for your queue, replace MAX with n   */

class Queue{
private:
    int arr[MAX];
    int rear = 0;
    int front = 0;
    int cnt = 0;
    
public:
    void push(int x){
        if(cnt < MAX){
            arr[rear % MAX] = x;
            rear ++;
            cnt ++;
        }
    }
public:
    int pop(){
        if(isEmpty()) return -1;
        
        int x = arr[front % MAX];
        front++;
        cnt --;
        return x;
    }
public:
    int top(){
        //if front and rear pointer points to the same element,
        //it means the queue is empty
        if(isEmpty()) return -1;
        return arr[front % MAX];
    }
public:
    bool isEmpty(){
        return front == rear;
    }
public:
    int size(){
        return cnt;
    }

};

int main(){
    
    /* sample driver code for the queue implementation  
    Queue q;
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(8);
    q.push(6);
    q.push(7);
    cout << q.top() <<endl;
    cout << q.pop() <<endl;
    cout << q.top() <<endl;
    q.push(9);
    cout << q.pop() <<endl;
    cout << q.pop() <<endl;
    cout << q.pop() <<endl;
    cout << q.pop() <<endl;
    cout << q.pop() <<endl;
    cout << q.pop() <<endl;
    cout << q.size()<<endl;
    */
    return 0;
}
