// COMSC-210 | Final Exam 2 | Christine Susic

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <map>
#include <list>
#include <random>
#include <ctime>
using namespace std;

//number of simulations
const int SIZE = 10;
//min and max for names size
const int MIN = 0, MAX = 7;

//struct for linked list
struct Node {
    string name;
    string drinkOrder;
    Node *next; //ptr
};

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
        //temp number for names range
        int temp = rand() % (MAX - MIN + 1) + MIN;
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
            newVal->name = names[temp];
            //50% probability someone will join
            if (rand() % 2 == 0) {
            cout << "Joined: " << endl;
            //output from linked list
            Node* current = head;
                while (current) {
                    cout << current -> name << endl;
                    current = current->next;
                }
            }
            //50% probability of muffins
            if (rand() % 2 == 0) {
            //muffin vendor with std::deque
                cout << "Muffin" << endl;
            }
            //50% probability of friendship bracelets
            if (rand() % 2 == 0) {
            //friendship bracelet vendor with std::vector
                cout << "Friendship bracelet" << endl;
            }
            //50% probability of scarves
            if (rand() % 2 == 0) {
            //scarf vendor with std::map
                cout << "Scarf" << endl;
            }
            cout << endl;
        }
        //if queue is empty, no customer served
        else {
            cout << "No customer served." << endl;
            newVal->next = head;
            newVal->name = names[temp];
            head = newVal;
        }
    }

    return 0;
}