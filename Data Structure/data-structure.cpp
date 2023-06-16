#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
    int MAX;
    
    int *myqueue; 
    int top;
    int items;
    int size;
public:
    Queue() {
        MAX = size;
        top = -1;
        items = -1;
        myqueue = new int [MAX];
    }

    bool isFull() {
        if(top == 0 && items == MAX - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if(top == -1) return true;
        else return false;
    }

    void queue(int value) {
        if(isFull()) {
            cout << "\nQueue is full!" << endl;
        } else {
            if(top == -1) top = 0;
            items++;
            myqueue[items] = value;
        }
    }
    
    int dequeue() {
        int value;
        if(isEmpty()) {
            cout << "Queue is empty!" << endl;
            return(-1);
        }
        else {
            value = myqueue[top];
            if(top >= items) {     //only one element in queue
                top = -1;
                items = -1;
            }
            else {
                top++;
            }
            cout << "Deleted Queue is : " << value << endl;
            return(value);
        }
    }

    /* Function to display elements of Queue */
    void display(){
        int i;
        if(isEmpty()) {
            cout << "Queue is Empty!!" << endl;
        }
        else {
            cout << "Queue elements are : ";
            for(i=top; i<=items; i++)
                cout << myqueue[i] << ", ";
                cout<<endl;
        }
    }
};
int main()
{
    int size, items, n;
    char ch;
    Queue q;

    cout<<"A = Queue\nB = Dequeue\nC = Display\nD = Exit"<< endl;
    do {
        cout << "\nEnter choice: ";
        cin>> ch;

        switch (ch) {

        case 'A': {

            cout<<"Enter number of elements : ";
            cin>>items;
            for (size = 1; size<=items; size++)
            {
                cout<<"Inserting: ";
                cin>>n;

                q.queue(n);
            }
            break;
        }
        case 'B': {
            q.dequeue();         
            break;
        }
        case 'C': {
            q.display();
            break;
        }
        case 'D': {
            exit(0);
            break;
        }
        default:
            cout << "Invalid choice" <<endl;
        }

    } while (ch != 'D');

    return 0;
}


 
