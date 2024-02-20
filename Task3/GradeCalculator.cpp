#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "\n\nEnter marks obtained in each subject (out of 100)"<<endl;
    cout << ". . . . . . . . . . . . . . . . . . . . . . . . .\n";

    int totalMarks = 0;
    int numSubjects, marks;
    do {
        cout << "\nEnter number of subjects: ";
        cin >> numSubjects;
    } while (numSubjects <= 0);

    for (int i = 1; i <= numSubjects; i++) {
        cout << " -> Enter marks for subject " << i << ": ";
        cin >> marks;
        if (marks >= 0 && marks <= 100) {
            totalMarks += marks;
        } else {
            cout << "\nInvalid marks. Marks should be between 0 and 100.\n";
            i--;
        }
    }

    cout << "\n---------------------------------";
    cout << "\nTotal marks: " << totalMarks;

    double averagePercentage = (double) totalMarks / numSubjects;
    cout << "\nAverage percentage: " << averagePercentage << "%";

    std::string grade;
    if (averagePercentage >= 80) {
        grade = "Excellent";
    } else if (averagePercentage >= 65) {
        grade = "Very Good";
    } else if (averagePercentage >= 55) {
        grade = "Good";
    } else if (averagePercentage >= 45) {
        grade = "Fair";
    } else if (averagePercentage >= 35){
        grade = "Pass";
    } else {
        grade = "Fail";
    }
    cout << "\nGrade: " << grade;
    cout << "\n---------------------------------";

    char choice;
    cout << "\n\nDo you want to continue? [y/n] : ";
    cin >> choice;
    if (choice=='y' || choice=='Y') {
        main();
    }

    return 0;

}