#include <stdio.h>
#include <stdbool.h>
#define size 5

int queue[size];
int rear = -1, front = -1;

// if the queue is empty then we increment both the front as well as the rear by one so that
// they are no longer -1
// after that only the rear pointer is increased.
bool isEmpty()
{
    if (rear == -1 && front == -1)
        return true;

    return false;
}

// here we check if the queue is full or not
bool isFull()
{
    if (rear == size - 1)
        return true;

    return false;
}

// okay so if the queue is empty then make both the counter 0
// and insert at rear
// if full display that it is full
// if normal, increment rear and insert value at rear
void enqueue(int value)
{
    if (isEmpty() == true)
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else if (isFull() == true)
    {
        printf("Queue is full");
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}

// so first check if the queue is empty, if empty then print empty
// we come at front==rear when all the elements are deleted.
// so if all the elements are deleted then we make the front and rear = -1

// finally in normal conditions we just increment the front as a result the queue's element is
// deleted
void dequeue()
{
    if (isEmpty() == true)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void print(void)
{
    if (!isEmpty())
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    else
    {
        printf("Queue is empty");
    }
    printf("\n");
    return;
}

int main()
{
    enqueue(30);
    enqueue(40);
    enqueue(50);
    print();
    return 0;
}