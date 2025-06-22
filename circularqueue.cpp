#include <bits/stdc++.h> 
class CircularQueue{
    public:
   int *arr;
   int size;
   int front;
   int rear;

    CircularQueue(int n){
     size  = n;
     arr = new int[size];
     front = -1;
     rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
if ((front == 0 && rear == size - 1) || ((rear + 1) % size == front)) {
            return false;
        }

        // First element to insert
        if (front == -1) {
            front = rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        return true;
      
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
 if(front == -1){
     return -1;

 }
 int ans = arr[front];

       
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return ans;
    }
};