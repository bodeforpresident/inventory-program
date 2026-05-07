#include <iostream>
#include <vector>
using namespace std;

void tableOutputUnsorted(vector<string>& resistors, vector<int>& resistorValues); // display table

int main() {
    // resistors vector
    vector<string> resistors = {"1 ohm", "1.2 ohm", "1.5 ohm", "1.8 ohm", "2.2 ohm", "2.7 ohm", "3.3 ohm", "3.9 ohm", "4.7 ohm", "5.6 ohm", "6.8 ohm", "8.2 ohm", "10 ohm",
    "12 ohm", "15 ohm", "18 ohm", "22 ohm", "27 ohm", "33 ohm", "39 ohm", "47 ohm", "56 ohm", "68 ohm", "82 ohm", "100 ohm", "120 ohm", "150 ohm", "180 ohm", "200 ohm", 
    "220 ohm", "270 ohm", "300 ohm", "330 ohm", "390 ohm", "470 ohm", "560 ohm", "620 ohm", "680 ohm", "820 ohm", "1k ohm", "1.2k ohm", "1.5k ohm", "1.8k ohm", "2.2k ohm", 
    "2.7k ohm", "3.3k ohm", "3.9k ohm", "4.7k ohm", "5.6k ohm", "6.8k ohm", "8.2k ohm", "10k ohm", "12k ohm", "15k ohm", "18k ohm", "22k ohm", "27k ohm", "33k ohm", "39k ohm", 
    "47k ohm","56k ohm", "68k ohm", "75k ohm", "82k ohm", "100k ohm", "120k ohm", "150k ohm", "180k ohm", "220k ohm", "270k ohm", "330k ohm", "390k ohm", "470k ohm", "560k ohm", 
    "680k ohm", "820k ohm", "1M ohm", "22M ohm"};
    
    // resistors values pt 2
    vector<int> resistorValues = {61, 96, 98, 101, 78, 93, 83, 87, 93, 88, 89, 69, 49, 93, 72, 86, 90, 76, 256, 78, 142, 9, 80, 73, 2, 16, 512, 444, 5, 0, 456, 208, 532, 10, 297, 
    345, 255, 21, 22, 0, 379, 55, 246, 327, 283, 295, 93, 418, 246, 209, 178, 171, 56, 68, 268, 348, 76, 116, 91, 289, 88, 79, 112, 73, 245, 91, 169, 89, 74, 86, 380, 74, 213, 93, 89, 
    88, 79, 112, 73, 245, 91, 169, 89, 74, 213, 93, 97, 89, 88, 37};
    
    tableOutputUnsorted(resistors, resistorValues);
}

void tableOutputUnsorted(vector<string>& resistors, vector<int>& resistorValues) {
    int k = 0;
    
    cout << "| Resistor Value | Amt. of Resistors |\n";
    cout << "|________________|___________________|\n";
    while (k <= resistors.size()) {
        if (resistors[k].length() == 5 && resistorValues[k] < 10) {
            cout << "| " << resistors[k] << "          | " << resistorValues[k] << "                 |\n";
            k++;
        }
        
        else if (resistors[k].length() == 5 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "          | " << resistorValues[k] << "                |\n";
            k++;
        }
        
        else if (resistors[k].length() == 5 && resistorValues[k] < 1000) {
            cout << "| " << resistors[k] << "          | " << resistorValues[k] << "              |\n";
            k++;
        }
        
        else if (resistors[k].length() == 6 && resistorValues[k] < 10) {
            cout << "| " << resistors[k] << "         | " << resistorValues[k] << "                 |\n";
            k++;
        }

        else if (resistors[k].length() == 6 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "         | " << resistorValues[k] << "                |\n";
            k++;
        }
        
        else if (resistors[k].length() == 6 && resistorValues[k] < 1000) {
            cout << "| " << resistors[k] << "         | " << resistorValues[k] << "               |\n";
            k++;
        }        
        
        else if (resistors[k].length() == 7 && resistorValues[k] < 10) {
            cout << "| " << resistors[k] << "        | " << resistorValues[k] << "                 |\n";
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

        else if (resistors[k].length() == 8 && resistorValues[k] < 10) {
            cout << "| " << resistors[k] << "        | " << resistorValues[k] << "                 |\n";
            k++;
        }        
        else if (resistors[k].length() == 8 && resistorValues[k] < 100) {
            cout << "| " << resistors[k] << "       | " << resistorValues[k] << "                |\n";
            k++;
        }
        else if (resistors[k].length() == 8 && resistorValues[k] < 1000) {
            cout << "| " << resistors[k] << "       | " << resistorValues[k] << "               |\n";
            k++;
        }        
        
    }
}
