#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void choice();
void QUIZZES();
void teacherJob();
void Assignment();
void mid_exam();
void total_marks();
void final_exam();
void saveToFile();
void loadFromFile();
void displayFromFile();

long reg[10] = {2024170, 2024120, 2024270, 2024145, 2024345};
int n = 5;
int midmarks[10] = {0};
int quizmarks[10] = {0};
int ass[10] = {0};
int finals[10] = {0};
double total[10] = {0};

void choice() {
    char option;
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
    do {
        cout << "1: Enter Assignment marks" << endl
             << "2: Enter Midterm marks" << endl
             << "3: Enter Quiz marks" << endl
             << "4: Enter Final marks" << endl
             << "5: Calculate Total Marks" << endl
             << "6: Save Data to File" << endl
             << "7: Load Data from File" << endl
             << "8: Display Data from File" << endl
             << "9: Exit" << endl;
        cin >> option;
        switch (option) {
            case '1':
			 Assignment();
			  break;
            case '2':
				 mid_exam();
			 	break;
            case '3':
				 QUIZZES();
				 break;
            case '4': 
				final_exam(); 
				break;
            case '5': 
				total_marks();
				 break;
            case '6': 
				saveToFile();
				 break;
            case '7': 
				loadFromFile(); 
				break;
            case '8': 
				displayFromFile(); 
				break;
            default: 
				break;
        }
    } while (option != '9');
    cout << "Goodbye!" << endl;
}

void Assignment() {
    cout << "Enter Assignment marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Reg# " << reg[i] << ": ";
        cin >> ass[i];
    }
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
}

void mid_exam() {
    cout << "Enter Midterm marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Reg# " << reg[i] << ": ";
        cin >> midmarks[i];
    }
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
}

void QUIZZES() {
    cout << "Enter Quiz marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Reg# " << reg[i] << ": ";
        cin >> quizmarks[i];
    }
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
}

void final_exam() {
    cout << "Enter Final marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter marks for Reg# " << reg[i] << ": ";
        cin >> finals[i];
    }
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
}

void total_marks() {
    for (int i = 0; i < n; i++) {
        total[i] = quizmarks[i] + ass[i] + midmarks[i] + finals[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Total marks for Reg# " << reg[i] << ": " << total[i] << endl;
    }
    cout<<endl<<endl<<"____________________________________________"<<endl<<endl;
}

// Save data to file
void saveToFile() {
	
    ofstream outFile("student_data.txt");
    
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        outFile << reg[i] << " "<< ass[i] << " "<< midmarks[i] << " "
                << quizmarks[i] << " "<< finals[i] << " "<< total[i] << endl;
    }
    
    outFile.close();
    cout << "Data saved successfully!" << endl;
}

// Load data from file
void loadFromFile() {
    ifstream inFile("student_data.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        inFile >> reg[i] >> ass[i] >> midmarks[i] >> quizmarks[i] >> finals[i] >> total[i];
    }
    inFile.close();
    cout << "Data loaded successfully!" << endl;
}

// Display data from file
void displayFromFile() {
    ifstream inFile("student_data.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return;
    }
    cout << "Reg#   Assignments   Midterms   Quizzes   Finals   Total\n";
    while (!inFile.eof()) {
        long r; int a, m, q, f; double t;
        inFile >> r >> a >> m >> q >> f >> t;
        
            cout << "     "<<r << "   " << a << "         " << m << "        " << q << "        " << f << "       " << t << endl;
        
    }
    inFile.close();
}

void teacherJob() {
    unsigned long pin;
    string teacherNAME;
    cout << "Dear sir, what's your name: ";
    cin.ignore(); 
    getline(cin, teacherNAME);
    const int teacherPin = 1234;
    cout << "Sir " << teacherNAME << ", please enter your pin: ";
    cin >> pin;
    if (pin == teacherPin) {
        choice();
    } else {
        cout << "Invalid pin!" << endl;
    }
}

int main() {
    teacherJob();
    return 0;
}

