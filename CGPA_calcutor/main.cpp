// CGPA_calcutor.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cstring>
using namespace std;

class cgpa_calulater {

    int TotalSubjects;
    int SubjectMaxMarks;
    int SubjectObtainedMarks[];
    //char SubjectObtainGrade[];
public:
    void inputs() {
        cout << "Enter Totle Subjects: ";
        cin >> TotalSubjects;
        cout << "Enter Subject Max_Marks: ";
        cin >> SubjectMaxMarks;
        SubjectMaxMarks = SubjectMaxMarks * TotalSubjects;
        for (int i = 0; i < TotalSubjects; i++) {
            cout << "Subject_" << i + 1 << ": ";
            cin >> SubjectObtainedMarks[i];
        }

        for (int i = 0; i < TotalSubjects; i++) {
            cout << "Subject_" << i + 1 << " " << "Marks: " << SubjectObtainedMarks[i] << endl;
        }

        int chouse = 0;
        cout << "Enter: 1 For Calculate CGPA across a Sem And 2 For GPA: ";
        cin >> chouse;

        if (chouse == 1) {
            cgpa_calculate(SubjectObtainedMarks, TotalSubjects, SubjectMaxMarks);
        }
        if (chouse == 2) {
            gpa_calculate();
        }

    }

    void cgpa_calculate(int arr[], int size, int Max) {
        cout << "\nCalculating Result..." << endl;
        float TotalMarks = 0.0f;
        //char id = 'c';
        for (int i = 0; i < size; i++) {
            TotalMarks += arr[i];
        }
        TotalMarks = (TotalMarks / Max)*10;

        display(TotalMarks);
    }

    void gpa_calculate() {
        cout << "Fuck Off: " << endl;
    }

    void display(float value) {
        cout << "CGPA" << " " << "is around:" << " " << value;
    }

    void StarLine() {
        for (int i = 0; i < 50; i++) {
            cout << "*";
        }
        cout << "\n";
    }
};




int main()
{
    cgpa_calulater obj_1;

    obj_1.StarLine();
    cout << "CGPA & GPA Calculater:-" << endl;
    obj_1.StarLine();

    obj_1.inputs();
    cout << "\n";
    cout << "Thank You..." << endl;
    cout << "Press Enter For Exit." << " " << "And Press 1 For Reset Program." << endl;

    int n = 1;
    cin >> n;
    if (n == 1) {
        obj_1.inputs();
    }

    return 0;
}