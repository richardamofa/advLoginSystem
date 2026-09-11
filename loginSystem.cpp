#include <iostream>
#include <string>

using namespace std;

int main() {
    string correctUsername = "admin";
    string correctPassword = "12345";

    string username;
    string password;

    int attempts = 3;

    while (attempts > 0) {
        cout << "===== LOGIN SYSTEM =====" << endl;

        cout << "Username: ";
        cin >> username;

        cout << "Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "\nLogin successful!" << endl;
            cout << "Welcome, " << username << "!" << endl;
            break;
        } 
        else {
            attempts--;

            cout << "\nInvalid username or password." << endl;

            if (attempts > 0) {
                cout << "Attempts remaining: " << attempts << endl;
                cout << endl;
            } 
            else {
                cout << "Account locked." << endl;
            }
        }
    }

    return 0;
}