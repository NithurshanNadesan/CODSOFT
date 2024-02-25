#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "\nEnter the file name [Ex:- file.txt]: ";
    cin >> fileName;

    ifstream file(fileName);
    if (!file.is_open()) {
        cout << "Error opening file!!.\nPlease check the file name and try again." << endl;
        main();
    }

    int wordCount = 0;
    string word;
    while (file >> word) {
        wordCount++;
    }
    cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Total word count: " << wordCount << endl;

    char choice;
    cout << "\nDo you want to continue? [y/n] : ";
    cin >> choice;
    if (choice=='y' || choice=='Y') {
        cout << ". . . . . . . . . . . . . . . . . ."<<endl;
        main();
    }

    file.close();
    return 0;
}
