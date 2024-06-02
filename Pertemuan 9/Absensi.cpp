#include<iostream>
using namespace std;

struct Node {
    char data;
    Node *kiri;
    Node *kanan;
};

Node *akar = NULL;

void addNode(Node **akar, char isi) {
    if((*akar) == NULL) {
        Node *baru = new Node;
        baru->data = isi;
        baru->kiri = NULL;
        baru->kanan = NULL;
        (*akar) = baru;
    }
}

void preOrder(Node *akar) {
    if(akar!= NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(Node *akar) {
    if(akar!= NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

void postOrder(Node *akar) {
    if(akar!= NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

int main() {
    char abjad;
    cout << "\n\n\tPosisi Awal Tree:\n\n";
    cout << "\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n";
    addNode(&akar, 'R'); 
    addNode(&(akar->kiri), 'A');
    addNode(&(akar->kanan), 'T');
    addNode(&(akar->kiri->kiri), 'E');
    addNode(&(akar->kiri->kiri->kiri), 'I');
    addNode(&(akar->kiri->kiri->kanan), 'S');
    cout << "Tampilan PreOrder  : ";
    preOrder(akar);
    cout << "\nTampilan InOrder   : ";
    inOrder(akar);
    cout << "\nTampilan PostOrder : ";
    postOrder(akar);
    return 0;
}
