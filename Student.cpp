/*==============================================
   Name:           LiGhT's's ._. DeAtH NoTe
   Student Number: 
   Email:          
   Date:           
   Workshop:      
  ==============================================*/

#include <iostream>
#include <string.h>
#include "Student.h"
#include "File.h"
using namespace std;

namespace sdds{
   int noOfStudents;
   Student* students;

   void sort() {
      int i, j;
      Student temp;
      for (i = noOfStudents - 1; i > 0; i--) {
         for (j = 0; j < i; j++) {
            if (students[j].m_grade > students[j + 1].m_grade) {
               temp = students[j];
               students[j] = students[j + 1];
               students[j + 1] = temp;
            }
         }
      }
   }

   bool load(Student& student){
      char sname[128];
      if(read(sname) && read(student.m_studentNumber) && read(student.m_grade)){
         student.m_name = new char[strlen(sname) + 1];
         strcpy(student.m_name, sname);
      }
      return true;
   }

   bool load(const char* file){   
      int i = 0,j=0;
      if(openFile(file)){
         noOfStudents = noOfRecords();
         students = new Student[noOfStudents];
         for(j=0;j<noOfStudents;j++){
            i += load(students[j]);
         }
          if(i!=noOfStudents){
            cout<<"Error: incorrect number of records read; the data is possibly corrupted.\n";
         }
         closeFile();
      }
      return true;
   }

   void display(const Student& stud){
      cout<<stud.m_name<<", "<<stud.m_studentNumber<<": "<<stud.m_grade<<endl;
   }

   void display(){
      sort();
      int i=0;
      for(i=0;i<noOfStudents;i++){
         cout<<i+1<<": ";
         display(students[i]);
      }
   }

   void deallocateMemory(){
      int i=0;
      for(i=0;i<noOfStudents;i++){
         delete[] students[i].m_name;
      }
      delete[] students;
   }
}
