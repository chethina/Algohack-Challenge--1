//10) Lord Crow wanted an extension phone.
//He needs 8 meters of phone wire.
//How many centimeters is this?
//One meter is 100 centimeters.



#include<iostream>
using namespace std;

int main(){
    int l_wire_meters = 8;
    int m_cm;
    int input;
    int cm;
    cout << "10) Lord Crow wanted an extension phone. He needs 8 meters of phone wire. How many centimeters is this?  One meter is 100 centimeters.  " << endl;
    m_cm = 100;
    cm = l_wire_meters * m_cm;
    cout << "Total Length : " << cm << "cm" << endl << endl;

    cout << "11) What if 1 meter equals to 50 cm and to 120 cm.  Design a program to input and output." << endl;
    cout << "1. 1m = 50cm" << endl << "2. 1m = 120cm" << endl << "Choose an option : ";
    cin >> input;
    if (input == 1){
        m_cm = 50;
        cm = l_wire_meters * m_cm;
        cout << "Total Length (1m = 50cm) : " << cm << "cm" << endl;
    }else if (input == 2){
        m_cm = 120;
        cm = l_wire_meters * m_cm;
        cout << "Total Length (1m = 120cm) : " << cm << "cm" << endl;
    }else{
        cout << "Incorrect Option!";
    }



    return 0;
}
