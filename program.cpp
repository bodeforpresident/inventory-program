#include <iostream>
#include <vector>
using namespace std;

void tableOutput(vector<string>& resistors, vector<int>& resistorValues); // display table

int main() {
    vector<string> resistors = {"1 ohm", "1.2 ohm", "1.5 ohm", "1.8 ohm", "2.2 ohm", "2.7 ohm", "3.3 ohm", "3.9 ohm", "4.7 ohm", "5.6 ohm", "6.8 ohm", "8.2 ohm", "10 ohm",
    "12 ohm", "15 ohm", "18 ohm", "22 ohm", "27 ohm", "33 ohm", "39 ohm", "47 ohm", "56 ohm", "68 ohm", "82 ohm", "100 ohm", "120 ohm", "150 ohm", "180 ohm", "200 ohm", 
    "220 ohm", "270 ohm", "300 ohm", "330 ohm", "390 ohm", "470 ohm", };
    vector<int> resistorValues = {61, 96, 98, 101, 78, 93, 83, 87, 93, 88, 89};
    
    tableOutput(resistors, resistorValues);
}

void tableOutput(vector<string>& resistors, vector<int>& resistorValues) {
    int k = 0;
    
    cout << "| Resistor Value | Amt. of Resistors |\n";
    cout << "======================================\n";
    while (k <= resistors.size()) {
        if (resistors[k].length() == 5 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "          | " << resistorValues[k] << "                |\n";
            k++;
        }
        
        else if (resistors[k].length() == 5 && resistorValues[k] < 1000) {
            cout << "| " << resistors[k] << "          | " << resistorValues[k] << "              |\n";
            k++;
        }
        
        else if (resistors[k].length() == 7 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "        | " << resistorValues[k] << "                |\n";
            k++;            
        }
        
        else if (resistors[k].length() == 7 && resistorValues[k] < 1000) {
            cout << "| " << resistors[k] << "        | " << resistorValues[k] << "               |\n";
            k++;
        }
        
        else if (resistors[k].length() == 8 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "         | " << resistorValues[k] << "              |\n";
            k++;
        }
    }
}
