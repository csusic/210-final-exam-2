// COMSC-210 | Final Exam 2 | Christine Susic

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

//struct for linked list
struct Customer {
    string name;
    string drinkOrder;
};

int main() {
    srand(time(0));
    
    //linked list
    list<Customer> drinkOrder; 
    //deque
    deque<Customer> muffin;
    //vector
    vector<Customer> bracelet;
    //map
    map<Customer, int> scarf;

    //names
    array<string, 8> names = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    //drink orders
    array<string, 6> drinkOrders = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice", "Green Tea"};
    //muffins
    array<string, 8> muffins = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    //friendship bracelets
    array<string, 6> bracelets = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice"};
    //scarves
    array<string, 6> scarves = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice"};

    //initiliaze queue with 3 customers 
    for (int i = 0; i < 3; i++) {
        //drinkOrder.push_back(drinkOrders);
        //muffin.push_back(muffins);
        //bracelet.push_back(bracelets);
        //scarf.push(scarves);
    }
    
    //10 rounds
    for (int i = 0; i < 3; i++) {
        //50% probability
        if (rand() % 2 == 0) {
        }
    }

    return 0;
}