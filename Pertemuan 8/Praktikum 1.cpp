#include <iostream>
using namespace std;

const int MAX = 100;

// Deklarasi class
class Queue {
private:
    int front, rear, count;
    int arr[MAX];

public:
    Queue() {
        front = 0;
        rear = MAX - 1;
        count = 0;
    }

    void enqueue(int x) {
        if (count >= MAX) {
            cout << "Antrian penuh." << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;
    }

    int dequeue() {
        if (count <= 0) {
            cout << "Antrian kosong." << endl;
            return -1;
        }
        int x = arr[front];
        front = (front + 1) % MAX;
        count--;
        return x;
    }

    int peek() {
        if (count <= 0) {
            cout << "Antrian kosong." << endl;
            return -1;
        }
        return arr[front];
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }
};

int main() {
    // Deklarasi bilangan dalam antrian
    Queue q;
    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(5);

    // Mengeluarkan elemen pertama
    q.dequeue();

    // Deklarasi perintah yang akan dilakukan pada antrian
    cout << "Ukuran antrian: " << q.size() << endl;
    cout << "Elemen pertama: " << q.peek() << endl;

    // Mengeluarkan elemen kedua (sekarang elemen pertama setelah dequeue)
    q.dequeue();
    cout << "Elemen kedua: " << q.peek() << endl;

    return 0;
}

