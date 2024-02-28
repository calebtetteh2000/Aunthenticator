#include <iostream>
#include <string>
using namespace std;
int main(){
    string systemUsername = "admin";
    string systemPassword = "password";
    string username,password;
    int attempt = 0;

    while(attempt<3){
        cout << "Enter your username" << endl;
        cin >> username;
        cout << "Enter your password" << endl;
        cin >> password;

        if(systemUsername == username && systemPassword == password){
            cout << "Login successful, Welcome!" << endl;
            break;
        }else{
            attempt ++;
            cout << "Incorrect username or password. Attempts remaining " << 3 - attempt << endl;
        }
    }if(attempt == 3){
        cout << "No more attempts remaining" << endl;
    }

    return 0;
}