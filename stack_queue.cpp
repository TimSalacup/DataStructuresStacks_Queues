#include <iostream>
#include "stack_queue.h"
using namespace std;

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