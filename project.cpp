/* 
*Date: 2019/06/14 
*Author: Xtreme21 (Deep)
*Purpose: CLI for Student Registeration Subsystem.
*/


//Includes
#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>

using namespace std;


//Class Declarations
class Student{
    private:
        int choice;
        std::string branchName, studentName, dob, mobile, registerationNo, year;
    public:
        Student();
        void getInfo(void);
        void displayInfo(void);
};

/* class Semester{
    private:
        std::string sem1_Subjects[5], sem2_Subjects[5], sem3_Subjects[5], sem4_Subjects[5], sem5_Subjects[5], sem6_Subjects[5], sem7_Subjects[5], sem8_Subjects[5];
        int marks;   
    public:

}; */
//Constructor Definitions
Student::Student(): branchName("No Info"){
    
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
    std::cout  << std::endl << "Name: "; cin>>studentName;
    std::cout  << std::endl << "Registeration Number: "; cin>>registerationNo;
    std::cout  << std::endl << "DOB: "; cin>>dob;
    std::cout  << std::endl << "Mobile No: "; cin>>mobile;
    std::cout  << std::endl << "Year: "; cin>>year;
    system("cls");
}


void Student::displayInfo(){
    //Function to print student information on console
    std::cout << "Name: " << studentName << std::endl; 
    std::cout << "DOB: " << dob << std::endl; 
    std::cout << "Mobile No: " << mobile << std::endl; 
    std::cout << "Year: " << year << std::endl;
    std::cout << "Branch: " << branchName << std::endl;
    system("cls");
}


int main(){
    //variable declaration
    int switch_on;
    
    //Object initialization
    Student student;
    do{
        //Printing menu on console
        std::cout << std::endl <<"1. Register" << std::endl;
        std::cout << "2. Display Info" << std::endl << std::endl;
        std::cin >> switch_on; 
        //Switch for menu
        switch (switch_on){
            case 1: student.getInfo(); break;
            case 2: student.displayInfo(); break;
            default: std::cout << "Invalid choice" << std::endl; break;
        }
    } while(switch_on == 1 || switch_on == 2);
    

    return 0;
}

