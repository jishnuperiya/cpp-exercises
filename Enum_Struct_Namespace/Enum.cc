#include <iostream>

/*
enum= enumeration
categories organized
assign a category to a variable
*/

//define permission level for a data bank for moodle for example

//category for permission levels
enum PermissionLevel{ // enum name is written in CamelCase
    STUDENT = 1,      // category in a enum is written in CAPITAL letters - symbolize its a global constant variable.
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};


int main()
{
    // creating a enum variable:

    // option 1
    PermissionLevel permission_level_jishnu = STUDENT;
    // option 2 - better
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;

    return 0;
}
