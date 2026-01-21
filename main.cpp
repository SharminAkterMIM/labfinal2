#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input string (a and b): ";
    cin >> input;

    int state = 0;

    for (char c : input) {
        switch(state) {
            case 0:
                if(c == 'b') state = 0;
                else if(c == 'a') state = 1;
                else { cout << "Invalid input\n"; return 0; }
                break;

            case 1:
                if(c == 'a') state = 1;
                else if(c == 'b') state = 2;
                else { cout << "Invalid input\n";
                return 0; }
                break;
                 case 2:
                if(c == 'a') state = 3;
                else { cout << "Invalid input\n"; return 0; }
                break;

            case 3:
                if(c == 'a' || c == 'b') state = 1;
                else { cout << "Invalid input\n"; return 0; }
                break;
        }
    }


    if(state == 1) cout << "String Accepted\n";
    else cout << "String Rejected\n";

    return 0;
}
