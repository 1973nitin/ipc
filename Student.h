/*==============================================
   Name:           LiGhT's's ._. DeAtH NoTe
   Student Number: 
   Email:          
   Date:           
   Workshop:      
  ==============================================*/

#ifndef SDDS_STUDENTS_H
#define SDDS_STUDENTS_H

namespace sdds{
    struct Student {
      char* m_name;
      int m_studentNumber;
      char m_grade;
   };

   void sort();
   bool load(Student& student);
   bool load(const char* file);
   void display(const Student& stud);
   void display();

   void deallocateMemory();
}

#endif