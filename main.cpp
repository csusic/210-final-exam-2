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

//struct for linked list
struct Customer {
    string name;
    string drinkOrder;
    Customer *next; //ptr
};

int main() {
    srand(time(0));
    
    //names
    array<string, 8> names = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    //linked list
    list<string> drinkOrderQueue = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice", "Green Tea"};
    //deque
    deque<string> muffinQueue = {"Oatmeal", "Blueberry", "Chocolate Chip"};
    //vector
    vector<string> braceletQueue = {"Red", "Yellow", "Blue"};
    //map
    map<string, int> scarfQueue;
    scarfQueue.insert({"Paisley", 3});
  
    //initiliaze queue with 3 customers 
    list<Customer> customerQueue;
    Customer *head = nullptr;
    Customer *newCustomer = new Customer;
    
    int counter = 1; //for counting
    for (int i = 0; i < 10; i++) {
        cout << "Round " << counter++ << endl;
        //10 rounds
        //if queue isn't empty
        if (!customerQueue.empty()) {
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
    }

    return 0;
}