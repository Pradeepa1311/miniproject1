#include <iostream>
using namespace std;

class ElectricityBill {
public:
    string name;
    int consumer_no;
    float units;
    float bill;

    void getData() {
        cout << "Enter Consumer Name: ";
        cin >> name;

        cout << "Enter Consumer Number: ";
        cin >> consumer_no;

        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill() {
        if (units <= 100) {
            bill = units * 1.5;
        }
        else if (units <= 300) {
            bill = (100 * 1.5) + ((units - 100) * 2.5);
        }
        else {
            bill = (100 * 1.5) + (200 * 2.5) + ((units - 300) * 4);
        }
    }

    void displayBill() {
        cout << "\n------ ELECTRICITY BILL ------" << endl;
        cout << "Consumer Name : " << name << endl;
        cout << "Consumer No   : " << consumer_no << endl;
        cout << "Units Used    : " << units << endl;
        cout << "Total Bill    : Rs." << bill << endl;
    }
};

int main() {
    ElectricityBill e;

    e.getData();
    e.calculateBill();
    e.displayBill();

    return 0;
}
