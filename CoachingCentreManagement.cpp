#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//sizes of arrays
const int MAX_STUDENTS = 100;
const int MAX_COURSES = 3;
const int MAX_COURSE_SCORES = MAX_STUDENTS * MAX_COURSES;
const string FILE_NAME = "Student_data.txt";
//The input is string that is why data type is string
string studentNames[MAX_STUDENTS];
string fatherNames[MAX_STUDENTS];
int rollNumbers[MAX_STUDENTS];
string courses[MAX_COURSES] = { "OOP", "DSA", "PF" };
int courseScores[MAX_COURSE_SCORES];
//counter
int studentCount = 0;
//This function is totally dedicated to file handling
void saveDataToFile() {
    //object of output file stream is created
    ofstream file(FILE_NAME);//(file name) is the constructor(special type of function) of the class ofstream
    if (file.is_open()) {
        for (int i = 0; i < studentCount; ++i) {
            if (!studentNames[i].empty()) {
                file << "Student Name: " << studentNames[i] << endl;
                file << "Father's Name: " << fatherNames[i] << endl;
                file << "Roll Number: " << rollNumbers[i] << endl;
                file << "Courses: ";
                for (int j = 0; j < MAX_COURSES; ++j) {
                    int index = i * MAX_COURSES + j;//ye index k liye calculation hai
                    file << courses[j] << " (Score: " << courseScores[index] << "/10)\n";
                    if (j < MAX_COURSES - 1) {
                        file << "\n";
                    }
                }
                file << endl << endl;
            }
        }
        file.close();
        cout << "Data saved to 'Student_data.txt' file." << endl;
    }
    else {
        cout << "Unable to open the file." << endl;
    }
}

void addStudent() {
    if (studentCount < MAX_STUDENTS) {
        cout << "Enter student name: ";
        cin >> studentNames[studentCount];

        cout << "Enter father's name: ";
        cin >> fatherNames[studentCount];

        cout << "Enter roll number: ";
        cin >> rollNumbers[studentCount];

        cout << "Enter scores for predefined courses: \n";
        for (int i = 0; i < MAX_COURSES; ++i) {
            int index = studentCount * MAX_COURSES + i;
            cout << "Enter score for " << courses[i] << " out of 10: ";
            cin >> courseScores[index];
        }

        studentCount++;

        saveDataToFile();

        system("CLS");
    }
    else {
        cout << "Maximum number of students reached." << endl;
    }
}

void displayStudent(int index) {
    cout << "Student Name: " << studentNames[index] << endl;
    cout << "Father's Name: " << fatherNames[index] << endl;
    cout << "Roll Number: " << rollNumbers[index] << endl;
    cout << "Courses: ";
    for (int i = 0; i < MAX_COURSES; ++i) {
        int courseIndex = index * MAX_COURSES + i;
        if (!courses[i].empty()) {
            cout << courses[i] << " (Score: " << courseScores[courseIndex] << "/10)";
            if (i < MAX_COURSES - 1) {
                cout << ", ";
            }
        }
    }
    cout << endl << endl;
}

void searchByRollNumber(int rollNum) {
    bool found = false; // boolean variable
    for (int i = 0; i < studentCount; ++i) {
        if (rollNumbers[i] == rollNum) {
            cout << "Student found!\n";
            displayStudent(i);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll number " << rollNum << " not found." << endl;
    }
    system("pause");
}

void updateStudentInfo(int rollNum) {
    bool found = false;
    for (int i = 0; i < studentCount; ++i) {
        if (rollNumbers[i] == rollNum) {
            cout << "Student found!\n";
            displayStudent(i);

            cout << "Enter updated scores for courses: \n";
            for (int k = 0; k < MAX_COURSES; ++k) {
                int index = i * MAX_COURSES + k;
                cout << "Enter updated score for course " << k + 1 << " out of 10: ";
                cin >> courseScores[index];
            }

            saveDataToFile();
            cout << "Student information updated successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll number " << rollNum << " not found." << endl;
    }
    system("pause");
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "No students to display." << endl;
    }
    else {
        for (int i = 0; i < studentCount; ++i) {
            cout << "Student " << i + 1 << endl;
            displayStudent(i);
        }
    }
    system("pause");
}

void loadDataFromFile() {
    ifstream file(FILE_NAME);
    if (file.is_open()) {
        string line; //String class object
        int currentStudentIndex = 0;

        while (getline(file, line)) {
            if (line.find("Student Name: ") != string::npos) {
                studentNames[currentStudentIndex] = line.substr(14);
            }
            else if (line.find("Father's Name: ") != string::npos) {//special constant representing not found
                fatherNames[currentStudentIndex] = line.substr(15);
            }
            else if (line.find("Roll Number: ") != string::npos) {
                string rollStr = line.substr(13);
                rollNumbers[currentStudentIndex] = stoi(rollStr);
            }
            else if (line.find("Courses: ") != string::npos) {
                size_t pos = line.find("Courses: ") + 9;
                string courseInfo = line.substr(pos);

                for (int i = 0; i < MAX_COURSES; ++i) {
                    size_t endPos = courseInfo.find("(Score: ");
                    if (endPos == string::npos) {
                        break;
                    }

                    int index = currentStudentIndex * MAX_COURSES + i;
                    courseScores[index] = stoi(courseInfo.substr(endPos + 8));

                    courseInfo = courseInfo.substr(endPos + 10);
                }

                currentStudentIndex++;
            }
        }
        studentCount = currentStudentIndex;

        file.close();
        cout << "Data loaded from 'Student_data.txt' file." << endl;
    }
    else {
        cout << "Unable to open the file. Starting with empty data." << endl;
    }
}



int main() {
    loadDataFromFile();

    int choice;

    do {
        system("CLS");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t****************************************************************" << endl;
        cout << "\t\t\t\*______________________________________________________________*" << endl;
        cout << "\t\t\t\*          WELCOME TO COACHING MANAGEMENT SYSTEM               *" << endl;
        cout << "\t\t\t\*______________________________________________________________*" << endl;
        cout << "\t\t\t\*                                                              *" << endl;
        cout << "\t\t\t\*      1.Add Student.                             	       *" << endl;
        cout << "\t\t\t\*      2.Search by Roll Number.                                *" << endl;
        cout << "\t\t\t\*      3.Update Student Information.                           *" << endl;
        cout << "\t\t\t\*      4.Display.                          		       *" << endl;
        cout << "\t\t\t\*      5.Exit.                                                 *" << endl;
        cout << "\t\t\t\*                                                              *" << endl;
        cout << "\t\t\t\*______________________________________________________________*" << endl;
        cout << "\t\t\t\****************************************************************" << endl;
        cout << "\t\t\t\tEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            int roll;
            cout << "Enter roll number to search: ";
            cin >> roll;
            searchByRollNumber(roll);
            break;
        case 3:
            int updateRoll;
            cout << "Enter roll number to update information: ";
            cin >> updateRoll;
            updateStudentInfo(updateRoll);
            break;
        case 4:
            displayStudents();
            break;
        case 5:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter again.\n";
            system("pause");
            break;
        }
    } while (choice != 5);

    return 0;
}
