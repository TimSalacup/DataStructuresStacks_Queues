#ifndef STACK_QUEUE_H
#define STACK_QUEUE_H

#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class StaticStack {
private:
    int stack[MAX_SIZE];
    int top;

public:
    StaticStack();
    ~StaticStack();
    void push(int value);
    int pop();
    void display();
    bool isFull();
    bool isEmpty();
};

class DynIntQueue {
    private:
    struct QueueNode{
        float value;
        struct QueueNode* next;
    };

    QueueNode* front;
    QueueNode* rear;
    int numItems;

public:
    DynIntQueue();
    ~DynIntQueue();
    void enqueue(int num);
    void dequeue(int &value);
    void displayQueue();
    void clear();
    bool isEmpty();
};

#endif