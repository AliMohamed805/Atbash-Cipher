#include <iostream>
#include <cctype>
#include <map>
#include <string>
using namespace std;
int main() {
    while (true) {
        //A welcome message 
        cout << "Hello user,Welcome" << endl;
        cout << "What would you like to do ?" << endl;
        cout << "A) Version 1" << endl << "B) Version 2" <<endl<<"C) Exit" << endl << endl;
        char option2;
        cin >> option2;
        //version 1
        if (toupper(option2)=='A') {
            //choose an option from the below three
            cout << "A) Cipher a message " << endl << "B) Decipher a message" << endl << "C) Exit " << endl;
            char option1;
            cin >> option1;
            //A map to subsitute the letters with each other
            map<char, char>mp1 = {
                    {'A', 'Z'}, {'B', 'Y'}, {'C', 'X'}, {'D', 'W'}, {'E', 'V'},
                    {'F', 'U'}, {'G', 'T'}, {'H', 'S'}, {'I', 'R'}, {'J', 'Q'},
                    {'K', 'P'}, {'L', 'O'}, {'M', 'N'}, {'N', 'M'}, {'O', 'L'},
                    {'P', 'K'}, {'Q', 'J'}, {'R', 'I'}, {'S', 'H'}, {'T', 'G'},
                    {'U', 'F'}, {'V', 'E'}, {'W', 'D'}, {'X', 'C'}, {'Y', 'B'}, {'Z', 'A'},
                    {'a', 'Z'}, {'b', 'Y'}, {'c', 'X'}, {'d', 'W'}, {'e', 'V'},
        {'f', 'U'}, {'g', 'T'}, {'h', 'S'}, {'i', 'R'}, {'j', 'Q'},
        {'k', 'P'}, {'l', 'O'}, {'m', 'N'}, {'n', 'M'}, {'o', 'L'},
        {'p', 'K'}, {'q', 'J'}, {'r', 'I'}, {'s', 'H'}, {'t', 'G'},
        {'u', 'F'}, {'v', 'E'}, {'w', 'D'}, {'x', 'C'}, {'y', 'B'}, {'z', 'A'}
            };
            //This option will encode your message
            if (toupper(option1) == 'A') {
                string message1;
                cout << "Enter your message : " << endl;
                cin.ignore();
                getline(cin, message1);
                string Cipher = "";
                for (int i = 0; i < message1.size(); i++) {
                    //if there is a space in the string it will be added in cipher normally
                    if (isspace(message1[i])) {
                        Cipher += " ";
                    }
                    // if there is a mark it will be added 
                    else if (ispunct(message1[i])) {
                        Cipher += message1[i];
                    }
                    //if there is a digit it will be added
                    else if (isdigit(message1[i])) {
                        Cipher += message1[i];
                    }
                    //Here the message will be encoded
                    else {
                        Cipher += mp1[message1[i]];
                    }
                }
                cout << "Your message was : " << message1 << endl << "Cipher is : " << Cipher << endl << endl;
            }
            else if (toupper(option1) == 'B') {
                string message1;
                cout << "Enter your message : " << endl;
                cin.ignore();
                getline(cin, message1);
                string Cipher = "";
                for (int i = 0; i < message1.size(); i++) {
                    if (isspace(message1[i])) {
                        Cipher += " ";
                    }
                    else if (ispunct(message1[i])) {
                        Cipher += message1[i];
                    }
                    else if (isdigit(message1[i])) {
                        Cipher += message1[i];
                    }
                    else {
                        Cipher += mp1[message1[i]];
                    }
                }
                cout << "Your message was : " << message1 << endl << "Cipher is : " << Cipher << endl << endl;


            }
            else if (toupper(option1) == 'C') {
                break;
            }
            else {
                cout << "Please select a valid choice" << endl << endl;
            }
        }
        //version 2
        else if (toupper(option2) == 'B') {
            cout << "A) Cipher a message " << endl << "B) Decipher a message" << endl << "C) Exit " << endl;
            char option3;
            cin >> option3;
            map<char, char>mp2 = {
                    {'A', 'M'}, {'B', 'L'}, {'C', 'K'}, {'D', 'J'}, {'E', 'I'},
                    {'F', 'H'}, {'G', 'G'}, {'H', 'F'}, {'I', 'E'}, {'J', 'D'},
                    {'K', 'C'}, {'L', 'B'}, {'M', 'A'}, {'N', 'Z'}, {'O', 'Y'},
                    {'P', 'X'}, {'Q', 'W'}, {'R', 'V'}, {'S', 'U'}, {'T', 'T'},
                    {'U', 'S'}, {'V', 'R'}, {'W', 'Q'}, {'X', 'P'}, {'Y', 'O'}, {'Z', 'N'},
                    {'a', 'M'}, {'b', 'L'}, {'c', 'K'}, {'d', 'J'}, {'e', 'I'},
        {'f', 'H'}, {'g', 'G'}, {'h', 'F'}, {'i', 'E'}, {'j', 'D'},
        {'k', 'C'}, {'l', 'B'}, {'m', 'A'}, {'n', 'Z'}, {'o', 'Y'},
        {'p', 'X'}, {'q', 'W'}, {'r', 'V'}, {'s', 'U'}, {'t', 'T'},
        {'u', 'S'}, {'v', 'R'}, {'w', 'Q'}, {'x', 'P'}, {'y', 'O'}, {'z', 'N'}
            };
            if (toupper(option3) == 'A') {
                string message1;
                cout << "Enter your message : " << endl;
                cin.ignore();
                getline(cin, message1);
                string Cipher = "";
                for (int i = 0; i < message1.size(); i++) {
                    if (isspace(message1[i])) {
                        Cipher += " ";
                    }
                    else if (ispunct(message1[i])) {
                        Cipher += message1[i];
                    }
                    else if (isdigit(message1[i])) {
                        Cipher += message1[i];
                    }
                    else {
                        Cipher += mp2[message1[i]];
                    }
                }
                cout << "Your message was : " << message1 << endl << "Cipher is : " << Cipher << endl << endl;

            }
            else if (toupper(option3) == 'B') {
                string message1;
                cout << "Enter your message : " << endl;
                cin.ignore();
                getline(cin, message1);
                string Cipher = "";
                for (int i = 0; i < message1.size(); i++) {
                    if (isspace(message1[i])) {
                        Cipher += " ";
                    }
                    else if (ispunct(message1[i])) {
                        Cipher += message1[i];
                    }
                    else if (isdigit(message1[i])) {
                        Cipher += message1[i];
                    }
                    else {
                        Cipher += mp2[message1[i]];
                    }
                }
                cout << "Your message was : " << message1 << endl << "Cipher is : " << Cipher << endl << endl;

            }
            else if (toupper(option3) == 'C') {
                break;
            }
            else {
          cout << "Please select a valid choice" << endl << endl;
            }


            

        }
        
        else if (toupper(option2) == 'C') {
            break;
        }
        else {

            cout << "Please select a valid choice" << endl << endl;

        }
    }
    return 0;
}