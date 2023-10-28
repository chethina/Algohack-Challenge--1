//8) Lord Crow built his nest in 32 hours. He worked for 4 days.
//How many hours did he work each day?

//9) Sister Crow worked for 60 hours. How much longer did she work than Lady Crow?



#include<iostream>
using namespace std;

int main(){
    int lady_hrs = 32;
    int l_days = 4;
    int sis_hrs;
    int perday;

    cout << "8) Lord Crow built his nest in 32 hours. He worked for 4 days. How many hours did he work each day?" << endl;
    perday = lady_hrs / l_days;
    cout << "Hours Worked for day : " << perday << "h" << endl << endl;

    cout << "9) Sister Crow worked for 60 hours. How much longer did she work than Lady Crow?" << endl;
    sis_hrs = 60;
    cout << "Sister Crow worked " << sis_hrs - lady_hrs << " hours more than Lady Crow" << endl;


    return 0;
}
