#include <iostream>
#include <string>

using namespace std;

int main(){
    system("cls");
    cout << "Hello boy!" << endl;
    string name;
    cout << "What yuor name?";
    cout << "Enter your name: " << name ;
    cin.ignore();
    getline(cin, name);
    cout << "Nice to meet ya, " << name << "!" << endl;

    return 0;
}