#include "Student.h" 
#include <iostream> 
#include <cstring> 
using namespace std; 
 

// Assign studentId and name 
 void Student::assignDetails(int SId ,const char *stName) 
{ 


  studentId = SId; 
  strcpy(name , stName); 

} 
 
// Display StudentId and Name 

void Student::display() 
{ 

//output
  cout<<"Student ID : "<<studentId<<endl; 
  cout<<"Name : "<<name; 

}