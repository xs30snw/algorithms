#include <cstdio>

struct Node {

    Node* next{};

    void insert_after(Node* new_node) {
        new_node->next = next;
        next = new_node;
    }

    int data;
};

int main() {

    Node n1, n2, n3;

    n1.data = 1;
    n1.insert_after( &n2 );

    n2.data = 2;
    n2.insert_after( &n3 );

    n3.data = 3;

    for ( Node *cursor = &n1; cursor; cursor = cursor->next )
        printf( "%d\n", cursor->data );

    return 0;
}