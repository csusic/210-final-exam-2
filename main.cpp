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
    
    int counter = 1; //for counting
    for (int i = 0; i < SIZE; i++) {
       //10 rounds
        cout << "Round " << counter++ << endl;
        //if queue isn't empty
        Node *head = nullptr;
        Node *newVal = new Node;
        if (!head) {
            //customer at head is always served
            cout << "Head:" << endl;
            head = newVal;
            newVal->next = nullptr;
            newVal->name = names[0];
        }
        else {
            newVal->next = head;
            newVal->name = names[0];
            head = newVal;
        }
        //50% probability someone will join
        if (rand() % 2 == 0) {
            cout << "Serving: " << endl;
            //output from linked list
        Node* current = head;
        while (current) {
            cout << current -> name << endl;
            current = current->next;
        }
        }
        //if queue is empty, no customer served
        else {
            cout << "No customer served." << endl;
        }
        //muffin vendor with std::deque
    
        //friendship bracelet vendor with std::vector

        //scarf vendor with std::map

    }

    return 0;
}