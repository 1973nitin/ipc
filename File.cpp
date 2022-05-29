/*==============================================
   Name:           LiGhT's's ._. DeAtH NoTe
   Student Number: 
   Email:          
   Date:           
   Workshop:      
  ==============================================*/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }

   bool read(char *stuName) {
      return fscanf(fptr, "%[^,],", stuName) == 1;
   }

   bool read(int &stuNumber) {
      return fscanf(fptr, "%d,", &stuNumber) == 1;
   }
   
   bool read(char &stuGrade) {
      return fscanf(fptr, "%c\n", &stuGrade) == 1;
   }
}