#include <iostream>
#include <new>

using namespace std;

struct Node {
    int info;
    struct Node* link;              // points to the next node in the list
};
typedef Node node;

class list {
    node *f;

    public:

    list() {
        f = NULL; // initialise f as null when creating the obj
    }

    void insert_front(int num) {
        node *p = new node; // create a new node at run time
        p -> info = num; // put the value in it
        p -> link = f; // make it to link the front of the list
        f = p; // make it the frnt of the list
    }

    void delete_front() {
        node *temp;
        if (f == NULL) { // if list empty
            cout << "List empty\n";
            return;
        }
        temp = f; // assign a temp node
        f = f -> link; // move front to the next node
        cout << "Item deleted is " << temp -> info << "\n";
        delete temp; // delete temp
    }

    void insert_rear(int num) {
        node *p = new node;
        node *cur;
        p -> info = num;

        if (f == NULL) { // check if list empty
            p -> link = f; // then just create a new node and exit
            f = p;
            return;
        }

        cur = f;
        while (cur -> link != NULL) { // traverse to the end of list
            cur = cur -> link;
        }
        p -> link = NULL; // make the last link as null
        cur -> link = p; // connect the last link to the new node
    }

    void delete_rear() {
        node *cur;
        node *prev;

        if (f == NULL) {
            cout << "List empty\n";
            return;
        }

        cur = f;
        while (cur -> link != NULL) { // go to last node
            prev = cur; // keep previous pointer
            cur = cur -> link;
        }
        prev -> link = NULL; // make prev link as null to make it as last node
        cout << "Item deleted is " << cur -> info << "\n";
        delete cur; // delete the removed node
    }

    void display() {
        node *cur;
        if (f == NULL) {
            cout << "List empty\n";
            return;
        }
        cur = f;
        while (cur != NULL) { // traverse throughout the list
            cout << cur -> info << "\t";
            cur = cur -> link;
        }
        cout << "\n";
    }
};

int main(void) {
    int choice, item;
    list ll;
    while (1) { // infinite loop
        cout << "1. insert front\t2. delete front\t3. insert rear\t4. delete rear\t5. display\t6. exit\n";
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "Enter item to be inserted\n";
                cin >> item;
                ll.insert_front(item);
                break;
            }
            
            case 2: {
                ll.delete_front();
                break;
            }

            case 3: {
                cout << "Enter item to be inserted\n";
                cin >> item;
                ll.insert_rear(item);
                break;
            }

            case 4: {
                ll.delete_rear();
                break;
            }

            case 5: {
                ll.display();
                break;
            }

            default: {
                return 0;
            }
        }
    }
    
    return 0;
}
