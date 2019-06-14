/* 
*Date: 2019/06/12
*Author: Xtreme21 (Deep)
*Purpose: Console Based Program for Student Registeration Subsystem (Demo).
*Compiler: tdm64 gcc-5.1.0-2
*/


//Includes
#include<iostream>
#include<iomanip>
#include<string>
#include<stdlib.h>

using namespace std;


//Class Declarations
class Student{
    protected:
        
        std::string branchName, studentName, dob, mobile, registerationNo, year;
    public:
        int branchCode;
        Student();
        void getInfo(void);
        void displayInfo(void);
        
};

class Semester: public Student{
    private:
        int marks[5], totalAll, universityTotal, externalTotal, internalTotal;   
    public:
        int selectSem;
        std::string sem_Subjects[5];
        void setSubject(void);
        void getMarks(void);
};


//Constructor Definitions
Student::Student(): branchName("No Info"){
    
    //Constructor to print and ask for student branch
    std::cout << "Select a Branch" << endl;
    //print branch choices menu
    cout << "\n1. Computer Science Engineering.\n2. Electronics and Communication Engineering.\n3. Electrical engineering.\n4. Mechanical Engineering.\n5. Information Technology Engineering.\n6. Civil Engineering.\n" << endl;
    cin>>branchCode; //Scan for entered number
    /* 
    * Switch case for assigning branch to Student::branchName wrt Student::choice.
    * choice is in int
    * branchName is used in displayInfo()
    */
    switch (branchCode){
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
    system("cls");
    std::cout << "Name: " << studentName << std::endl; 
    std::cout << "DOB: " << dob << std::endl; 
    std::cout << "Mobile No: " << mobile << std::endl; 
    std::cout << "Year: " << year << std::endl;
    std::cout << "Branch: " << branchName << std::endl;
}

void Semester::setSubject(){
    //Function to set 
    system("cls");
    std::cout << "Please Enter the Semester number: " << std::endl;
    std::cin >> selectSem;
    switch (selectSem){
    //Year 1 Common for all
    case 1:  sem_Subjects[0] = "Applied Mathematics I",  sem_Subjects[1] = "Engineering Physics",  sem_Subjects[2] = "Engineering Chemistry",  sem_Subjects[3] = "Basic Electrical Engineering",  sem_Subjects[4] = "Basics of Civil Engineering"; break;
    case 2:  sem_Subjects[0] = "Applied MathematicsII",  sem_Subjects[1] = "Advanced Engineering Physics",  sem_Subjects[2] = "Material Chemistry",  sem_Subjects[3] = "Adv. Electrical Engineering",  sem_Subjects[4] = "Engineering Mechanics"; break;
 
    /*
        * Every semester switch has a sub switch dictated by the branchCode (due to difference in subjects for every branch).
        *  branchCodes are as listed below.
        1. Computer Science Engineering.
        2. Electronics and Communication Engineering.
        3. Electrical engineering.
        4. Mechanical Engineering.
        5. Information Technology Engineering.
        6. Civil Engineering.
    */
 
    /* Year 2 ***********************************************************************************************************************************************************************************/ 
    case 3: 
        switch (branchCode)
        {
            case 1:  sem_Subjects[0] = "ACPLD",  sem_Subjects[1] = "DCFM",  sem_Subjects[2] = "CAO",  sem_Subjects[3] = "SSEIT",  sem_Subjects[4] = "CW1"; break;
            case 2:  sem_Subjects[0] = "M III",  sem_Subjects[1] = "EDC",  sem_Subjects[2] = "EM",  sem_Subjects[3] = "C&DS",  sem_Subjects[4] = "NT"; break;
            case 3:  sem_Subjects[0] = "M III",  sem_Subjects[1] = "EMI",  sem_Subjects[2] = "NA",  sem_Subjects[3] = "EDC",  sem_Subjects[4] = "NCES"; break;
            case 4:  sem_Subjects[0] = "M III",  sem_Subjects[1] = "KM",  sem_Subjects[2] = "FM",  sem_Subjects[3] = "MP",  sem_Subjects[4] = "EM"; break;
            case 5:  sem_Subjects[0] = "M III",  sem_Subjects[1] = "PLDC",  sem_Subjects[2] = "DEFM",  sem_Subjects[3] = "DC",  sem_Subjects[4] = "CL I"; break;
            case 6:  sem_Subjects[0] = "M III",  sem_Subjects[1] = "SM",  sem_Subjects[2] = "FM I",  sem_Subjects[3] = "GE I",  sem_Subjects[4] = "CP"; break;
            default: cout << "Invalid Branch"; break;
        }break;
 
    case 4: 
        switch (branchCode)
        {
            case 1:  sem_Subjects[0] = "DMGT",  sem_Subjects[1] = "OS",  sem_Subjects[2] = "TFCS",  sem_Subjects[3] = "SP",  sem_Subjects[4] = "CW2"; break;
            case 2:  sem_Subjects[0] = "M IV",  sem_Subjects[1] = "PDM",  sem_Subjects[2] = "EF",  sem_Subjects[3] = "DCFM",  sem_Subjects[4] = "SS"; break;
            case 3:  sem_Subjects[0] = "EEM",  sem_Subjects[1] = "EM",  sem_Subjects[2] = "DC",  sem_Subjects[3] = "EM i",  sem_Subjects[4] = "CP"; break;
            case 4:  sem_Subjects[0] = "M IV",  sem_Subjects[1] = "MD I",  sem_Subjects[2] = "ET",  sem_Subjects[3] = "TM II",  sem_Subjects[4] = "FP II"; break;
            case 5:  sem_Subjects[0] = "DMGT",  sem_Subjects[1] = "ADS",  sem_Subjects[2] = "TOC",  sem_Subjects[3] = "OOM",  sem_Subjects[4] = "CAO"; break;
            case 6:  sem_Subjects[0] = "SA I",  sem_Subjects[1] = "BCM",  sem_Subjects[2] = "EEE I",  sem_Subjects[3] = "CT",  sem_Subjects[4] = "HWR"; break;
            default: cout << "Invalid Branch"; break;
        }break;
     
    /* Year 3 *********************************************************************************************************************************************************************************/
    case 5: 
        switch (branchCode)
        {
            case 1:  sem_Subjects[0] = "DC",  sem_Subjects[1] = "OOP",  sem_Subjects[2] = "DBMS",  sem_Subjects[3] = "CG",  sem_Subjects[4] = "DAA"; break;
            case 2:  sem_Subjects[0] = "STA",  sem_Subjects[1] = "MP&MC",  sem_Subjects[2] = "AC",  sem_Subjects[3] = "CE",  sem_Subjects[4] = "IEED"; break;
            case 3:  sem_Subjects[0] = "EPS I",  sem_Subjects[1] = "EMD",  sem_Subjects[2] = "MPI",  sem_Subjects[3] = "EM II",  sem_Subjects[4] = "ED"; break;
            case 4:  sem_Subjects[0] = "IEED",  sem_Subjects[1] = "MD II",  sem_Subjects[2] = "MP III",  sem_Subjects[3] = "HT",  sem_Subjects[4] = "MMM"; break;
            case 5:  sem_Subjects[0] = "SP",  sem_Subjects[1] = "DAA",  sem_Subjects[2] = "SE",  sem_Subjects[3] = "CG",  sem_Subjects[4] = "JAVA"; break;
            case 6:  sem_Subjects[0] = "SA II",  sem_Subjects[1] = "RCCS",  sem_Subjects[2] = "FM I",  sem_Subjects[3] = "GE II",  sem_Subjects[4] = "HWR II"; break;
            default: cout << "Invalid Branch"; break;
        }break;
     
        case 6: 
            switch (branchCode){
                case 1:  sem_Subjects[0] = "AI",  sem_Subjects[1] = "DP",  sem_Subjects[2] = "SEPM",  sem_Subjects[3] = "CN",  sem_Subjects[4] = "COMM SKILLS"; break;
                case 2:  sem_Subjects[0] = "LC",  sem_Subjects[1] = "DSP",  sem_Subjects[2] = "CSE",  sem_Subjects[3] = "DC",  sem_Subjects[4] = "EWS"; break;
                case 3:  sem_Subjects[0] = "PSP",  sem_Subjects[1] = "EEIM",  sem_Subjects[2] = "EDTC",  sem_Subjects[3] = "CS I",  sem_Subjects[4] = "PE"; break;
                case 4:  sem_Subjects[0] = "EC1",  sem_Subjects[1] = "AC",  sem_Subjects[2] = "OR",  sem_Subjects[3] = "IE",  sem_Subjects[4] = "ED"; break;
                case 5:  sem_Subjects[0] = "CN",  sem_Subjects[1] = "OS",  sem_Subjects[2] = "DBMS",  sem_Subjects[3] = "IP",  sem_Subjects[4] = "FE"; break;
                case 6:  sem_Subjects[0] = "SS",  sem_Subjects[1] = "S II",  sem_Subjects[2] = "FM II",  sem_Subjects[3] = "BDD",  sem_Subjects[4] = "EE II"; break;
                default: cout << "Invalid Branch"; break;
            }break;
     
    /* Year 4 *********************************************************************************************************************************************************************************/
        case 7: 
            switch (branchCode){
                case 1:  sem_Subjects[0] = "Data Warehousing and Mining",  sem_Subjects[1] = "LP",  sem_Subjects[2] = "E I",  sem_Subjects[3] = "E II",  sem_Subjects[4] = "Project"; break;
                case 2:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 3:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 4:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 5:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 6:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                default: cout << "Invalid Branch"; break;
            }break;
 
 
        case 8: 
            switch (branchCode){
                case 1:  sem_Subjects[0] = "DOS",  sem_Subjects[1] = "ICS",  sem_Subjects[2] = "E III",  sem_Subjects[3] = "E IV",  sem_Subjects[4] = "Project"; break;
                case 2:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 3:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 4:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 5:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4",  sem_Subjects[4] = "S5"; break;
                case 6:  sem_Subjects[0] = "S1",  sem_Subjects[1] = "S2",  sem_Subjects[2] = "S3",  sem_Subjects[3] = "S4", sem_Subjects[4] = "S5"; break;
                default: cout << "Invalid Branch"; break;
            }break;
    /*******************************************************************************************************************************************************************************************/    
        default: std::cout << "LMAO"; break;
} 

}

void Semester::getMarks(){
    int i;
    cout << "Enter your marks for the given subjects: " << std::endl << std::endl;
    cout << setw(35) << std::left << "Subject Name" << "\t" << setw(3) << std::left <<"Marks" << std::endl;
    for (i = 0; i < 5; i++){
        cout << setw(35) << std::left << sem_Subjects[i] << "\t" << setw(3) << std::left;
        cin >> marks[i];
    }
}


int main(){
    //Variable declaration
    int mainMenuChoice, i, selectSem;
    
    //Object initialization
     Semester sem;
    do{
        std::cout << std::endl;
        //Printing main menu on console
        std::cout << "1. Register" << std::endl;
        std::cout << "2. Display Info" << std::endl;
        std::cout << "3. Enter Marks" << std::endl;
        std::cout << "4. Display Result" << std::endl;
        std::cout << std::endl;
        std::cin >> mainMenuChoice; 
        
        //Switch for menu
        switch (mainMenuChoice){
            case 1: sem.getInfo(); break;
            case 2: sem.displayInfo(); break;
            case 3: sem.setSubject(); sem.getMarks();break;
            default: std::cout << std::endl << "Invalid Choice" << std::endl << std::endl; break;
        
        }
    } while(mainMenuChoice == 1 || mainMenuChoice == 2);//Continue till invalid input 
    
    return 0;
}

