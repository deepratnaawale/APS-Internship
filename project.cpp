/* 
*Date: 2019/06/14 
*Author: Xtreme21 (Deep)
*Purpose: CLI for Student Registeration Subsystem.
*/


//Includes
#include<iostream>
#include<iomanip>

using namespace std;


//Class Declarations
class Student{
    protected:
        int choice;
        char branchName[100], studentName[20], dob[10], mobile[10], registerationNo[15], year;
    public:
        Student();
        void getInfo(void);
        void displayInfo(void);
};


//Constructor Definitions
Student::Student(){
    branchName= "No Info", studentName = "No Info", dob = "No Info", mobile = "No Info", registerationNo = "No Info", year = 'N';
    //Constructor to print and ask for student branch
    cout << "Select a Branch" << endl;
    //print branch choices menu
    cout << "\n1. Computer Science Engineering.\n2. Electronics and Communication Engineering.\n3. Electrical engineering.\n4. Mechanical Engineering.\n5. Information Technology Engineering.\n6. Civil Engineering.\n" << endl;
    cin>>choice; //Scan for entered number
    /* 
    * Switch case for assigning branch to Student::branchName wrt Student::choice.
    * choice is in int
    * branchName is used in displayInfo()
    */
    switch (choice){
        case 1: branchName = "Computer Science Engineering"; break;
        case 2: branchName = "Electronics and Communication Engineering"; break;
        case 3: branchName = "Electrical engineering"; break;
        case 4: branchName = "Mechanical Engineering"; break;
        case 5: branchName = "Information Technology Engineering"; break;
        case 6: branchName = "Civil Engineering"; break;
        default: break;
    }
}


//Class Methods
void Student::getInfo(){
    //Function to get student information from console
    std::cout << "Name: " << std::endl; cin>>name;
    std::cout << "DOB: " << std::endl; cin>>dob;
    std::cout << "Mobile No: " << std::endl; cin>>mobile;
    std::cout << "Year: " << std::endl; cin>>name;
}


void Student::displayInfo(){
    //Function to print student information on console
    std::cout << "Name: " << name << std::endl; 
    std::cout << "DOB: " << dob << std::endl; 
    std::cout << "Mobile No: " << mobile << std::endl; 
    std::cout << "Year: " << year << std::endl;
    std::cout << "Branch: " << branchName << std::endl;
}


int main(){
    //variable declaration
    int switch_on;
    
    //Object initialization
    Student student;
    
    //Printing menu on console
    std::cout << "1. Register" << std::endl;
    std::cout << "2. Display Info" << std::endl;
    
    //Switch for menu
    switch (switch_on){
        case 1: student.getInfo(); break;
        case 2: student.displayInfo(); break;
        default: std::cout << "Invalid choice" << std::endl; break;
    }


    return 0;
}

