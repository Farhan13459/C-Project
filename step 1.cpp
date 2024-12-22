
#include <iostream>
#include <fstream>
using namespace std;

const int n = 5;
long reg[n] = {2024170, 2024120, 2024270, 2024145, 2024345};
int ass[n] = {0}, midmarks[n] = {0}, quizmarks[n] = {0}, finals[n] = {0};
double total[n] = {0};
char grades[n];

int gradeA = 90, gradeB = 80, gradeC = 70, gradeD = 60;

void inputMarks() {
    cout << "Enter marks for each student: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << reg[i] << ": " << endl;
        cout << "Assignment: "; cin >> ass[i];
        cout << "Midterm: "; cin >> midmarks[i];
        cout << "Quiz: "; cin >> quizmarks[i];
        cout << "Final Exam: "; cin >> finals[i];
    }
}

void TotalMarks() {
    for (int i = 0; i < n; i++) {
        total[i] = ass[i] + midmarks[i] + quizmarks[i] + finals[i];
    }
}

void assignGrades() {
    for (int i = 0; i < n; i++) {
        grades[i] = (total[i] >= gradeA) ? 'A' :
                    (total[i] >= gradeB) ? 'B' :
                    (total[i] >= gradeC) ? 'C' :
                    (total[i] >= gradeD) ? 'D' : 'F';
    }
}

void Grading() {
    cout << "Enter new grade thresholds (A, B, C, D): ";
    cin >> gradeA >> gradeB >> gradeC >> gradeD;
}

void saveToFile() {
    ofstream outFile("student_data.txt");
    for (int i = 0; i < n; i++) {
        outFile << reg[i] << " " << ass[i] << " " << midmarks[i] << " " << quizmarks[i]
                << " " << finals[i] << " " << total[i] << " " << grades[i] << endl;
    }
    cout << "Data saved successfully!" << endl;
}

void showFromFile() {
    ifstream inFile("student_data.txt");
    long r;
    int a, m, q, f;
    double t;
    char g;
    while (inFile >> r >> a >> m >> q >> f >> t >> g) {
        cout << r << " " << a << " " << m << " " << q << " " << f << " " << t << " " << g << endl;
    }
}

void teacherJob() {
    string name; unsigned long pin;
    cout << "Enter teacher name: "; cin.ignore(); getline(cin, name);
    cout << "Enter pin: "; cin >> pin;
    if (pin == 1234) inputMarks();
    else { cerr << "Pin is wrong!" << endl; exit(1); }
}

int main() {
    teacherJob();
    TotalMarks();
    assignGrades();
    saveToFile();
    showFromFile();
    return 0;
}

