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
        cout << "A) Cipher a message " << endl << "B) Decipher a message" << endl << "C) Exit " << endl;
        char option;
        cin >> option;
        map<char, char>mp = {
                {'A', 'Z'}, {'B', 'Y'}, {'C', 'X'}, {'D', 'W'}, {'E', 'V'},
                {'F', 'U'}, {'G', 'T'}, {'H', 'S'}, {'I', 'R'}, {'J', 'Q'},
                {'K', 'P'}, {'L', 'O'}, {'M', 'N'}, {'N', 'M'}, {'O', 'L'},
                {'P', 'K'}, {'Q', 'J'}, {'R', 'I'}, {'S', 'H'}, {'T', 'G'},
                {'U', 'F'}, {'V', 'E'}, {'W', 'D'}, {'X', 'C'}, {'Y', 'B'}, {'Z', 'A'},
                {'a', 'z'}, {'b', 'y'}, {'c', 'x'}, {'d', 'w'}, {'e', 'v'},
    {'f', 'u'}, {'g', 't'}, {'h', 's'}, {'i', 'r'}, {'j', 'q'},
    {'k', 'p'}, {'l', 'o'}, {'m', 'n'}, {'n', 'm'}, {'o', 'l'},
    {'p', 'k'}, {'q', 'j'}, {'r', 'i'}, {'s', 'h'}, {'t', 'g'},
    {'u', 'f'}, {'v', 'e'}, {'w', 'd'}, {'x', 'c'}, {'y', 'b'}, {'z', 'a'}
        };
        if (toupper(option) == 'A') {
            string message;
            cout << "Enter your message : " << endl;
            cin.ignore();
            getline(cin, message);
            string Cipher = "";
            for (int i = 0; i < message.size(); i++) {
            if (isspace(message[i])) {
                Cipher +=" ";
            }
            else if (isdigit(message[i])) {
                Cipher += message[i];
            }
            else {
                Cipher += mp[message[i]];
            }
        }
        cout << "Your message was : " << message << endl << "Cipher is : " << Cipher << endl << endl;
        }
        else if (toupper(option) == 'B') {
            string message;
            cout << "Enter your message : " << endl;
            cin.ignore();
            getline(cin, message);
            string Cipher = "";
            for (int i = 0; i < message.size(); i++) {
                if (isspace(message[i])) {
                    Cipher += " ";
                }
                else if (isdigit(message[i])) {
                    Cipher += message[i];
                }
                else {
                    Cipher += mp[message[i]];
                }
            }
            cout << "Your message was : " << message << endl << "Cipher is : " << Cipher << endl << endl;


        }
        else if (toupper(option) == 'C') {
            break;
        }
        else {
            cout << "Please select a valid choice" << endl << endl;
        }
    }
    return 0;
}