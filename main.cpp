// COMSC-210 | Final Exam 2 | Christine Susic

#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include <vector>
#include <array>
#include <deque>
#include <map>
#include <list>
#include <random>
#include <ctime>
using namespace std;

const int SIZE = 10;

//struct for linked list
struct Node {
    string name;
    string drinkOrder;
    Node *next; //ptr
};

//function prototype
void output(Node *);

int main() {
    srand(time(0));
    
    //names
    array<string, 8> names = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    //drink orders
    array<string, 6> drinkOrders = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice", "Green Tea"};
    
    //deque
    deque<string> muffinQueue = {"Oatmeal", "Blueberry", "Chocolate Chip"};
    //vector
    vector<string> braceletQueue = {"Red", "Yellow", "Blue"};
    //map
    map<string, int> scarfQueue;
    scarfQueue.insert({"Paisley", 3});
    
    //copied from lab 17 solution with adjustments
    Node *head = nullptr;
    int counter = 1; //for counting
    //create a linked list of size SIZE with random numbers 0-99
    for (int i = 0; i < SIZE; i++) {
        cout << "Round " << counter++ << endl;
        int tmp_val = rand() % 100;
        Node *newVal = new Node;
        //adds node at head
        if (!head) { //if this is the first node, it's the new head
            head = newVal;
            newVal->next = nullptr;
            newVal->name = tmp_val;
        }
        else { //its a second or subsequent node; place at the head
            newVal->next = head;
            newVal->name = tmp_val;
            head = newVal;
        }
    }
    
       /* //10 rounds
        //if queue isn't empty
        if (!head) {
            //customer at head is always served
            cout << "Head:" << endl;
            //50% probability someone will join
            if (rand() % 2 == 0) {
                cout << "Serving: " << endl;
            }
            //if queue is empty, no customer served
            } else {
                cout << "No customer served." << endl;
            }
            
            //muffin vendor with std::deque
        
            //friendship bracelet vendor with std::vector
        
            //scarf vendor with std::map
    }*/

    return 0;
}
