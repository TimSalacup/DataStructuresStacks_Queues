#include <iostream>
#include "stack_queue.h"
using namespace std;

// DYNAMIC QUEUE (TIMOTHY BERNARDO SALACUP)
DynIntQueue::DynIntQueue()
{
    front = NULL;
    rear = NULL;
    numItems = 0;
}

DynIntQueue::~DynIntQueue()
{
    clear();
}

void DynIntQueue::clear()
{
    int value; // Dummy variable for dequeue
    while (!isEmpty())
        dequeue(value);
}

bool DynIntQueue::isEmpty()
{
    bool status;
    if (numItems)
        status = false;
    else
        status = true;
    return status;
}

void DynIntQueue::enqueue(int num)
{
    QueueNode *newNode;
    newNode = new QueueNode;
    newNode->value = num;
    newNode->next = NULL;
    if (isEmpty())
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    numItems++;
}

void DynIntQueue::dequeue(int &num)
{
    QueueNode *temp;
    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        num = front->value;
        temp = front->next;
        delete front;
        front = temp;
        numItems--;
    }
}

void DynIntQueue::displayQueue()
{
    QueueNode *nodePtr = front;
    while (nodePtr != nullptr)
    {
        cout << nodePtr->value << " ";
        nodePtr = nodePtr->next;
    }
    cout << endl;
}

// STATIC STACK (STEPHANIE RAIDEN GRIARTE)

StaticStack::StaticStack() {
    top = -1;
}

StaticStack::~StaticStack(){
    cout << "Stack destroyed" << endl;
}

void StaticStack::push(int value) {
    if (isFull()) {
        cout << "Stack Overflow. Cannot push " << value << endl;
        return;
    }
    stack[++top] = value;
    cout << value << " pushed to stack." << endl;
}


int StaticStack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    int value = stack[top--];
    cout << value << " popped from stack." << endl;
    return value;
}


void StaticStack::display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack contents: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}


bool StaticStack::isFull() {
    return top == MAX_SIZE - 1;
}


bool StaticStack::isEmpty() {
    return top == -1;
}

// STATIC QUEUE (XHEAWN CRISTOBAL)

staticQueue::staticQueue() {
    front = 0;
    rear = -1;
    count = 0;
}

bool staticQueue::isFull() {
    return count == MAX_SIZE2;
}

bool staticQueue::isEmpty() {
    return count == 0;
}

void staticQueue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue full.\n";
        return;
    }
    rear = (rear + 1) % MAX_SIZE2;
    arr[rear] = value;
    count++;
    cout << "Enqueued: " << value << endl;
}

void staticQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue empty.\n";
        return;
    }
    cout << "Dequeued: " << arr[front] << endl;
    front = (front + 1) % MAX_SIZE2;
    count--;
}

void staticQueue::display() {
    if (isEmpty()) {
        cout << "Queue empty.\n";
        return;
    }
    cout << "Queue contents: ";
    for (int i = 0; i < count; i++) {
        int index = (front + i) % MAX_SIZE2;
        cout << arr[index] << " ";
    }
    cout << endl;
}

