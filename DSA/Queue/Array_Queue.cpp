#include <iostream>
using namespace std;

class Queue {
public:
    int size;
    int front;
    int rear;
    int* arr;

    Queue(int sz) : size(sz), front(0), rear(0) {
        arr = new int[size];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() const {
        return rear == front;
    }

    bool isFull() const {
        return rear == size - 1;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "This Queue is full\n";
        } else {
            arr[rear++] = val;
            cout << "Enqued element: " << val << "\n";
        }
    }

    int dequeue() {
        int value = -1;
        if (isEmpty()) {
            cout << "This Queue is empty\n";
        } else {
            value = arr[front++];
        }
        return value;
    }
};

int main() {
    Queue q(4);
    
    // Enqueue few elements
    q.enqueue(12);
    q.enqueue(15);
    q.enqueue(1);
    cout << "Dequeuing element " << q.dequeue() << endl;
    cout << "Dequeuing element " << q.dequeue() << endl;
    cout << "Dequeuing element " << q.dequeue() << endl;
    q.enqueue(45);
    q.enqueue(45);
    q.enqueue(45);

    // if (q.isEmpty()) {
    //     cout << "Queue is empty\n";
    // }
    // if (q.isFull()) {
    //     cout << "Queue is full\n";
    // }

    return 0;
}
