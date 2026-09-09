//Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra
#include<iostream>
using namespace std;
#include<string>

int main(){
    //Date will be put here....
    time_t now = time(0);

    char date[20];

    strftime(date, sizeof(date), "%d-%B-%Y", localtime(&now));
    //now we can use time in our program

    string first_name,last_name,program;
    int year;
    cout << "Please enter first name: ";
    cin >> first_name;
    cout << "Please enter last name: ";
    cin >> last_name;
    cout << "Enter program of study: ";
    cin.ignore();
    getline(cin, program);
    cout << "Year of study: ";
    cin >> year;
    cout << "Date: " << date << endl <<"To: " << first_name << " " << last_name << "," << endl << "Dear " << first_name << "," << endl << "CONGRATULATIONS! I am pleased to inform you that the Makerere University " << endl << "Admissions Board has approved your application for admission to the "<<year <<" academic year." << endl << endl << "You have been offered a place for the following course: "<< endl << "PROGRAM: " <<program <<endl << endl << "As a student of Makerere University, you will be part of a historic institution dedicated to academic excellence and innovation. Please ensure "<< endl << "that you report to the Academic Registrar's office with your original " << endl << "academic documents for verification during the orientation week." <<endl << endl << "We look forward to welcoming you to the Makerere University." << endl <<endl << "Yours sincerely, " <<endl<<endl<<endl << "John Doe" << endl << "Registra"; 

    return 0;
}