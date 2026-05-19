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
    list<Customer> drinkOrderQueue;
    //drink orders
    array<string, 6> drinkOrders = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice", "Green Tea"};
    
    //deque
    deque<Customer> muffinQueue;
    //muffins
    array<string, 8> muffins = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    
    //vector
    vector<Customer> braceletQueue;
    //friendship bracelets
    array<string, 6> bracelets = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice"};
    
    //map
    map<Customer, int> scarfQueue;
    //scarves
    array<string, 6> scarves = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice"};

    //initiliaze queue with 3 customers 
    std::queue<std::string> customerQueue;
    customerQueue.push("Customer 1");
    customerQueue.push("Customer 2");
    customerQueue.push("Customer 3");
    
    int counter = 1; //for counting
    for (int i = 0; i < 10; i++) {
        cout << "Round " << counter++ << endl;
        //10 rounds
            //customer at head is always served
            if (!drinkOrderQueue.empty()) {
                cout << "Serving: " << endl;
            //if queue is empty, no customer served
            } else {
                cout << "No customer." << endl;
            }
        
        
            //50% probability someone will join
            if (rand() % 2 == 0) {
        
            }
        
            //muffin vendor with std::deque
        
            //friendship bracelet vendor with std::vector
        
            //scarf vendor with std::map
    }

    return 0;
}