#include <ctype.h>
#include <iostream>

using namespace std;

class EntireProgram {
    public:
        EntireProgram() {
            inputLoop_1();
            printFactorial_2();
        }
    private:
        string userInput_str;
        int userInput_int;

        void inputLoop_1() {
            bool inputIsWrong;
            do {
                inputIsWrong = false;

                cout << "Enter an integer: ";
                getline(cin, userInput_str);

                for(char currentLetter : userInput_str) {
                    if(!isdigit(currentLetter)) {
                        inputIsWrong = true;
                        break;
                    }
                }
                if (!inputIsWrong) {
                    int temp = stoi(userInput_str);
                    
                    if(temp <= 0 || temp >= 51) {
                        inputIsWrong = true;
                    }
                    else {
                        userInput_int = temp;
                    }
                }
                if(inputIsWrong) {
                    cout << "\"" << userInput_str << "\" must be between 1-50 (inclusive)\n";
                    cout << "_________________________\n";
                    cout << "\n";
                }
            } while(inputIsWrong);
        }
        void printFactorial_2() {
            unsigned long long int total = 1;
            
            for(int i = userInput_int; i >= 1; i--) {
                total *= i;
                cout << i;

                if(i >= 2) {
                    cout << "*";
                }
            }
            cout << " = " << total;
        }
};

int main() {
    cout << "\n";
    EntireProgram startRunning;
    cout << "\n\n";
    return 0;
}