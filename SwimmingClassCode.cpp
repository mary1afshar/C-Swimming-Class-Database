//Maryam Afshar

//Swimming class datatbase
//Purpose: Swimming Registration Database, user has the option to enroll in a class, modify a class, delete an existing class or view all classes

#include <iostream>
#include <array>
using namespace std;

#define MAX_CLASS_SIZE 15 //define max number of students

struct StudentInfo {
    string FirstName;
    string Address;
    int Age;
    string Gender;
};

//SUPERCLASS
class SwimmingRegisteration {
private:
    StudentInfo studentList[MAX_CLASS_SIZE];


    //constructor
public:
    string wait;
    SwimmingRegisteration() {

        for (int i = 0;i < MAX_CLASS_SIZE;i++) {
            studentList[i] = { "0","0",0,"0" };
        }
    }
    void UserInterface() {
    }

    //function #1 has space (max 15)
    bool swimmingClassHasSpace() {
        for (int i = 0; i < MAX_CLASS_SIZE; i++) {
            if (studentList[i].FirstName == "0") {
                return true; //less than 15 students
            }
        }
        return false; //over 15 
    }

    //function #2 to add student info into a list
    bool addStudentToList(StudentInfo sInfo) {
        for (int i = 0; i < MAX_CLASS_SIZE; i++) {
            if (studentList[i].FirstName == "0") {
                studentList[i].FirstName = sInfo.FirstName;
                studentList[i].Address = sInfo.Address;
                studentList[i].Age = sInfo.Age;
                studentList[i].Gender = sInfo.Gender;
                return true;
            }
        }
        return false;
    }

    //function #3 all student list
    void printStudentList() {
        for (int i = 0; i < MAX_CLASS_SIZE; i++) {
            if (studentList[i].FirstName != "0") {
                cout << "Name:" << studentList[i].FirstName << "    Address:" << studentList[i].Address << "   Age:" << studentList[i].Age << "    Gender:" << studentList[i].Gender << endl;
            }
        }
    }

    //function #4 delete a student from list
    bool deleteStudentFromList(StudentInfo sInfo) {
        for (int i = 0; i < MAX_CLASS_SIZE; i++) {
            if (studentList[i].FirstName == sInfo.FirstName & studentList[i].Address == sInfo.Address & studentList[i].Age == sInfo.Age & studentList[i].Gender == sInfo.Gender) {
                studentList[i].FirstName = "0";
                studentList[i].Address = "0";
                studentList[i].Age = 0;
                studentList[i].Gender = "0";
                return true;
            }
        }
        return false;
    }

    //function #5 modify a student from list
    bool modifyStudentFromList(StudentInfo newInfo) {
        for (int i = 0; i < MAX_CLASS_SIZE; i++) {
            if (studentList[i].FirstName != "0") {
                studentList[i].FirstName = newInfo.FirstName;
                studentList[i].Address = newInfo.Address;
                studentList[i].Age = newInfo.Age;
                studentList[i].Gender = newInfo.Gender;
                return true;
            }
        }
        return false;
    }

};

//INHERITENCE 
//Preschool
class PreschoolRegisteration : public SwimmingRegisteration {
public:
    PreschoolRegisteration() : SwimmingRegisteration() {
    }

    string UserInterface() {
        StudentInfo preschoolS = { "", "", 0, "" };
        if (swimmingClassHasSpace() == true) {
            cout << "PRESCHOOL CLASS IS AVALIBALE, please input swimmer's information:" << endl;
            cout << "" << endl; // BLANK LINE
            cout << "Please enter the NAME of student:" << endl;
            cin >> preschoolS.FirstName;
            cout << "Please enter the AGE of student:" << endl;
            cin >> preschoolS.Age;
            cout << "Please enter the GENDER of student:" << endl;
            cin >> preschoolS.Gender;
            cout << "Please enter the ADDRESS of student:" << endl;
            cin >> preschoolS.Address;

            //add student info to list

            if (addStudentToList(preschoolS)) {
                cout << "" << endl; // BLANK LINE
                cout << "Swimmer  " << preschoolS.FirstName << "  has been successfully enrolled in Preschool Class!" << endl;
                cout << "User information:" << endl; // BLANK LINE
                cout << "Name:" << preschoolS.FirstName << endl;
                cout << "Age:" << preschoolS.Age << endl;
                cout << "Gender:" << preschoolS.Gender << endl;
                cout << "Address:" << preschoolS.Address << endl;

                cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
                cin >> wait;
                if (wait == "yes") { return "1"; }
                if (wait == "quit") { return "0"; }
            }



        }
        else {
            cout << "" << endl; // BLANK LINE
            cout << "PRESCHOOL CLASS IS FULL" << endl;
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { return "1"; }
            if (wait == "quit") { return "0"; }
        }
    }

};


class UltraRegisteration :public SwimmingRegisteration {

public:
    UltraRegisteration() : SwimmingRegisteration() {
    }
    string UserInterface() {
        StudentInfo ultraS = { "", "", 0, "" };
        if (swimmingClassHasSpace() == true) {
            cout << "ULTRA CLASS IS AVALIBALE, please input swimmer's information:" << endl;
            cout << "" << endl; // BLANK LINE
            cout << "Please enter the NAME of student:" << endl;
            cin >> ultraS.FirstName;
            cout << "Please enter the AGE of student:" << endl;
            cin >> ultraS.Age;
            cout << "Please enter the GENDER of student:" << endl;
            cin >> ultraS.Gender;
            cout << "Please enter the ADDRESS of student:" << endl;
            cin >> ultraS.Address;

            //add student info to list
            if (addStudentToList(ultraS)) {
                cout << "" << endl; // BLANK LINE
                cout << "Swimmer  " << ultraS.FirstName << "  has been successfully enrolled in Preschool Class!" << endl;
                cout << "User information:" << endl; // BLANK LINE
                cout << "Name:" << ultraS.FirstName << endl;
                cout << "Age:" << ultraS.Age << endl;
                cout << "Gender:" << ultraS.Gender << endl;
                cout << "Address:" << ultraS.Address << endl;

                cout << "" << endl; // BLANK LINE

                cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
                cin >> wait;
                if (wait == "yes") { return "1"; }
                if (wait == "quit") { return "0"; }
            }



        }
        else {
            cout << "" << endl; // BLANK LINE
            cout << "ULTRA CLASS IS FULL" << endl;
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { return "1"; }
            if (wait == "quit") { return "0"; }
        }
    }
};


class AdultRegisteration :public SwimmingRegisteration {
public:
    AdultRegisteration() : SwimmingRegisteration() {
    }
    string UserInterface() {
        StudentInfo adultS = { "", "", 0, "" };
        if (swimmingClassHasSpace() == true) {
            cout << "ADULT CLASS IS AVALIBALE, please input swimmer's information:" << endl;
            cout << "" << endl; // BLANK LINE
            cout << "Please enter the NAME of student:" << endl;
            cin >> adultS.FirstName;
            cout << "Please enter the AGE of student:" << endl;
            cin >> adultS.Age;
            cout << "Please enter the GENDER of student:" << endl;
            cin >> adultS.Gender;
            cout << "Please enter the ADDRESS of student:" << endl;
            cin >> adultS.Address;

            //add student info to list
            if (addStudentToList(adultS)) {
                cout << "" << endl; // BLANK LINE
                cout << "Swimmer  " << adultS.FirstName << "  has been successfully enrolled in Preschool Class!" << endl;
                cout << "User information:" << endl; // BLANK LINE
                cout << "Name:" << adultS.FirstName << endl;
                cout << "Age:" << adultS.Age << endl;
                cout << "Gender:" << adultS.Gender << endl;
                cout << "Address:" << adultS.Address << endl;

                cout << "" << endl; // BLANK LINE

                cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
                cin >> wait;
                if (wait == "yes") { return "1"; }
                if (wait == "quit") { return "0"; }
            }



        }
        else {
            cout << "" << endl; // BLANK LINE
            cout << "ADULT CLASS IS FULL" << endl;
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { return"1"; }
            if (wait == "quit") { return"0"; }
        }
    }
};

int main() {
    string pn, p1, input, d, wait, m;

    //from base class
    PreschoolRegisteration* preschoolReg = new PreschoolRegisteration();
    UltraRegisteration* ultraReg = new UltraRegisteration();
    AdultRegisteration* adultReg = new AdultRegisteration();

    pn = "1";
    while (pn != "0") {
        if (pn == "1") {
            cout << "                                             " << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "~~~~ Welcome to SWIMMING CLASS ENROLLMENT ~~~" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "                                             " << endl;

            cout << "" << endl; // BLANK LINE
            cout << "Please use the following command prompts:" << endl;
            cout << "A - Add a class." << endl;
            cout << "B - Delete an existing class." << endl;
            cout << "C - View all classes." << endl;
            cout << "D - Modify a swimming class." << endl;
            cout << "E - Exit program." << endl;
            cout << "Enter your choice:";
            cin >> p1;

            if (p1 == "A") { pn = "2"; } // Add
            if (p1 == "B") { pn = "3"; } // Delete
            if (p1 == "C") { pn = "4"; } // View
            if (p1 == "D") { pn = "5"; } // modify
            if (p1 == "E") { pn = "0"; } // exit program

        }
        //ADD
        if (pn == "2") {
            cout << "" << endl; // BLANK LINE
            cout << "***************ADD A CLASS******************" << endl;
            cout << "" << endl; // BLANK LINE
            cout << "Swimming classes available on Saturdays at 10:00 AM:" << endl;
            cout << "Each class is 45 minutes long." << endl;
            cout << "What class would you like to sign up for?" << endl;
            cout << "" << endl; // BLANK LINE
            cout << "1 - Preschool" << endl;
            cout << "2 - Ultra" << endl;
            cout << "3 - Adult" << endl;
            cout << "4 - EXIT" << endl;
            cout << "Enter your choice:";
            cin >> input;

            if (input == "1") { pn = "6"; }// Preschool 
            if (input == "2") { pn = "7"; }// Ultra
            if (input == "3") { pn = "8"; }// Adult
            if (input == "4") { pn = "0"; } // exit program
        }

        //Preschool
        if (pn == "6") {
            pn = preschoolReg->UserInterface();
        }

        //Ultra
        if (pn == "7") {
            pn = ultraReg->UserInterface();
        }

        //Adult
        if (pn == "8") {
            pn = adultReg->UserInterface();
        }

        //DELETE
        if (pn == "3") {

            cout << "" << endl; // BLANK LINE
            cout << "************DELETE AN EXISTING CLASS****************" << endl;
            cout << "Which type of class did you sign up for?" << endl;
            cout << "1 - Preschool" << endl;
            cout << "2 - Ultra" << endl;
            cout << "3 - Adult" << endl;
            cout << "4 - Exit program" << endl;
            cout << "Please enter number:";
            cin >> d;


            if (d == "1") { pn = "9"; }// DeletePreschool 
            if (d == "2") { pn = "10"; }// Ultra
            if (d == "3") { pn = "11"; }// Adult
            if (d == "4") { pn = "0"; } // exit program

            //delete preschool class
            if (pn == "9") {
                StudentInfo preschoolS = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> preschoolS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> preschoolS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> preschoolS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> preschoolS.Address;

                if (preschoolReg->deleteStudentFromList(preschoolS)) {
                    cout << "" << endl;
                    cout << "After deleting" << endl;
                    cout << "Updated list for all preschool classes:" << endl;
                    preschoolReg->printStudentList();
                }
            }

            //delete ultra class
            if (pn == "10") {
                StudentInfo ultraS = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> ultraS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> ultraS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> ultraS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> ultraS.Address;

                if (ultraReg->deleteStudentFromList(ultraS)) {
                    cout << "" << endl;
                    cout << "After deleting" << endl;
                    cout << "Updated list for all ultra classes:" << endl;
                    ultraReg->printStudentList();
                }
            }

            //delete adult class
            if (pn == "11") {
                StudentInfo adultS = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> adultS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> adultS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> adultS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> adultS.Address;

                if (adultReg->deleteStudentFromList(adultS)) {
                    cout << "" << endl;
                    cout << "After deleting" << endl;
                    cout << "Updated list for all adult classes:" << endl;
                    adultReg->printStudentList();
                }
            }
            cout << "" << endl; // BLANK LINE
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { pn = "1"; }
            if (wait == "quit") { pn = "0"; }
            cout << "" << endl; // BLANK LINE
        }


        //VIEW
        if (pn == "4") {
            cout << "" << endl; // BLANK LINE
            cout << "************VIEW ALL EXISTING CLASS****************" << endl;
            cout << "" << endl;

            //list all preschool classes
            cout << "All preschool classes:" << endl;
            preschoolReg->printStudentList();
            cout << "" << endl;

            //list all ultra classes
            cout << "All ultra classes:" << endl;
            ultraReg->printStudentList();
            cout << "" << endl;

            //list all adult classes
            cout << "All adult classes:" << endl;
            adultReg->printStudentList();
            cout << "" << endl;

            cout << "" << endl; // BLANK LINE
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { pn = "1"; }
            if (wait == "quit") { pn = "0"; }
            cout << "" << endl; // BLANK LINE
        }

        //modify
        if (pn == "5") {
            cout << "" << endl; // BLANK LINE
            cout << "************MODIFY AN EXISTING CLASS****************" << endl;
            cout << "Which type of class did you sign up for?" << endl;
            cout << "1 - Preschool" << endl;
            cout << "2 - Ultra" << endl;
            cout << "3 - Adult" << endl;
            cout << "4 - Exit program" << endl;
            cout << "Please enter number:";
            cin >> m;

            if (m == "1") { pn = "12"; }// modify Preschool 
            if (m == "2") { pn = "13"; }// modify Ultra
            if (m == "3") { pn = "14"; }// modify Adult
            if (m == "4") { pn = "0"; } // exit program

            //modify preschool class
            if (pn == "12") {
                StudentInfo preschoolS = { "", "", 0, "" };
                StudentInfo newPreschool = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> preschoolS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> preschoolS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> preschoolS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> preschoolS.Address;

                cout << "" << endl;

                //NEW INFORMATION
                cout << "Please enter the NEW NAME of student:" << endl;
                cin >> newPreschool.FirstName;
                cout << "Please enter the NEW AGE of student:" << endl;
                cin >> newPreschool.Age;
                cout << "Please enter the NEW GENDER of student:" << endl;
                cin >> newPreschool.Gender;
                cout << "Please enter the NEW ADDRESS of student:" << endl;
                cin >> newPreschool.Address;

                if (preschoolReg->modifyStudentFromList(newPreschool)) {
                    cout << "" << endl;
                    cout << "After motification~" << endl;
                    cout << "Updated list for all preschool classes:" << endl;
                    preschoolReg->printStudentList();
                }
            }

            //modify ultra class
            if (pn == "13") {
                StudentInfo ultraS = { "", "", 0, "" };
                StudentInfo newUltra = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> ultraS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> ultraS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> ultraS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> ultraS.Address;

                cout << "" << endl;

                //NEW INFORMATION
                cout << "Please enter the NEW NAME of student:" << endl;
                cin >> newUltra.FirstName;
                cout << "Please enter the NEW AGE of student:" << endl;
                cin >> newUltra.Age;
                cout << "Please enter the NEW GENDER of student:" << endl;
                cin >> newUltra.Gender;
                cout << "Please enter the NEW ADDRESS of student:" << endl;
                cin >> newUltra.Address;

                if (ultraReg->modifyStudentFromList(newUltra)) {
                    cout << "" << endl;
                    cout << "After motification~" << endl;
                    cout << "Updated list for all ultra classes:" << endl;
                    ultraReg->printStudentList();
                }
            }

            //modify adult class
            if (pn == "14") {
                StudentInfo adultS = { "", "", 0, "" };
                StudentInfo newAdult = { "", "", 0, "" };

                cout << "Please enter the NAME of student:" << endl;
                cin >> adultS.FirstName;
                cout << "Please enter the AGE of student:" << endl;
                cin >> adultS.Age;
                cout << "Please enter the GENDER of student:" << endl;
                cin >> adultS.Gender;
                cout << "Please enter the ADDRESS of student:" << endl;
                cin >> adultS.Address;

                cout << "" << endl;

                //NEW INFORMATION
                cout << "Please enter the NEW NAME of student:" << endl;
                cin >> newAdult.FirstName;
                cout << "Please enter the NEW AGE of student:" << endl;
                cin >> newAdult.Age;
                cout << "Please enter the NEW GENDER of student:" << endl;
                cin >> newAdult.Gender;
                cout << "Please enter the NEW ADDRESS of student:" << endl;
                cin >> newAdult.Address;

                if (adultReg->modifyStudentFromList(newAdult)) {
                    cout << "" << endl;
                    cout << "After motification~" << endl;
                    cout << "Updated list for all adult classes:" << endl;
                    adultReg->printStudentList();
                }
            }
            cout << "" << endl; // BLANK LINE
            cout << "Enter 'yes' to continue or 'quit' to exit program:" << endl;
            cin >> wait;
            if (wait == "yes") { pn = "1"; }
            if (wait == "quit") { pn = "0"; }
            cout << "" << endl; // BLANK LINE
            //
        }

    }