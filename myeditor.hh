/**
 * myeditor.hh
 *
 * You must define a class that extends the EditingBuffer class in this file.
 * Consult the assignment handout for more information.
 *
 * Student ID: 300413248
 * Name: Anja Petersen-Hardy
 */

#include "editor.hh"

using namespace editor;

class MyEditingBuffer : public EditingBuffer {

public:
    bool replace(char c, char replacement, int offset);
    int replace(std::string str, std::string replacement, int offset);
    void justify(char **viewingBuffer, int rows, int cols);

};
