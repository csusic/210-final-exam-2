// COMSC-210 | Final Exam 2 | Christine Susic

#include <iomanip>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

//struct for linked list
struct CustomerNode {
    string name;
    string drinkOrder;
};

int main() {
    srand(time(0));

    array<string, 8> names = {"Abby", "Bill", "Charlie", "Derek", "Ellie", "Francis", "George", "Hilda"};
    array<string, 6> drinkOrders = {"Coffee", "Iced Tea", "Americano", "Water", "Apple Juice", "Green Tea"};

    return 0;
}