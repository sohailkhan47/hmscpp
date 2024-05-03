#include <bits/stdc++.h>
#include <iostream>
#include "Hostel.h"

using namespace std;

int main() {
    int n, pre, flag=0;

    hostel obj1;


    // The below two functions are creating
    // problems problem is stucking on black
    // screen and its caused either because the
    // files does not exist or there is a
    // problem with these functions
    obj1.get_roominfo();
    obj1.get_studentinfo();

    obj1.welcome();
    obj1.header();

    cout << "\t\t\t\tPlease Select Any Option: ";

    while (cin >> n) {
        pre = n;
        cout << "\n\t==========================================================================================================\n\n";
        flag = 0;
        // student options
        if (pre == 11) {
            obj1.display_student();
        } else if(pre == 12) {
            obj1.add_student();
        } else if (pre == 13) {
            obj1.search_student();
        } else if (pre == 14) {
            obj1.update_student();
        } else if (pre == 15) {
            obj1.delete_student();
        }

        // End student options
        else if(pre == 21) {
            obj1.display_room();
        } else if(pre == 22) {
            obj1.add_room(); // problem in this func
        } else if(pre == 23) {
            obj1.search_room();
        } else if(pre == 24) {
            obj1.update_room();
        } else if(pre == 25) {
            obj1.delete_room();
        } else if(pre == 31) {
            obj1.available_room();
        } else if(pre == 32) {
            obj1.search_student();
        }

        //end room object
        else if(pre == 0) {
            obj1.program_close();
            break;
        } else if(pre == 1) {
            flag = 1;
            obj1.header();
        } else {
            flag = 1;
            cout << "\t\t\t\t\t\tYou Press Wrong Option\n\n";
            obj1.header();
        }

        if (flag != 1)
            cout << "\n\t\t\t\tAre You Want To See Dashboard if Yes) 1 or No) 0 : ";
        else
            cout << "\t\t\t\tPlease Select Any Option: ";
    }
    return 0;
} // end main function
