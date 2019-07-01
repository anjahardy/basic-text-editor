/**
 * myeditor.cc
 *
 * You must implement the member functions, including constructors, of your class defined in myeditor.hh.
 * Consult the assignment handout for the detailed specifications of each of the member functions.
 *
 * Student ID: 300413248
 * Name: Anja Petersen-Hardy
 */

/** Recieved guidance from Josh Richards 300402562**/


 #include "myeditor.hh"
 #include <string>
 #include <iostream>

 using namespace std;
 using namespace editor;
 bool MyEditingBuffer::replace(char c, char replacement, int offset){
     for ( int i = 0; i < BUFFER_LEN; i++) {
         if (buffer[i] == c) {
             buffer[i] = replacement;
             printf(buffer);
             return true;
         }
     }
     return false;
 }

 int MyEditingBuffer::replace(std::string str, std::string replacement, int offset){
     return 0;
 }
 void MyEditingBuffer::justify(char **viewingBuffer, int rows, int cols){

 }
