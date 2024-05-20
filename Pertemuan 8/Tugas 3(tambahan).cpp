#include <iostream>
#include <queue>
#include <string>
using namespace std;
void displayMenu() {
    cout << "Antrian bengkel DNR RACING" << endl;
    cout << "1. Tambah kendaraan kedalam antrian" << endl;
    cout << "2. Layani kendaraan" << endl;
    cout << "3. Tampilkan antrian kendaraan" << endl;
    cout << "4. Keluar opsi" << endl;
    cout << "select an option: ";
}

void displayQueue(queue<string> q) {
    cout << "current queue: ";
    if (q.empty()) {
        cout << "Blank!" << endl;
    } else {
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
}

int main() {
    queue<string> ticketQueue;
    int choice;
    string name;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "input name: ";
                cin >> name;
                ticketQueue.push(name);
                cout << name << " finished adding." << endl;
                break;
            case 2:
                if (!ticketQueue.empty()) {
                    cout << ticketQueue.front() << " in process" << endl;
                    ticketQueue.pop();
                } else {
                    cout << "B;ank no one is served" << endl;
                }
                break;
            case 3:
                displayQueue(ticketQueue);
                break;
            case 4:
                cout << "Oit with program" << endl;
                return 0;
            default:
                cout << "Acces denied" << endl;
        }
        cout << endl;
    }
    return 0;
}

