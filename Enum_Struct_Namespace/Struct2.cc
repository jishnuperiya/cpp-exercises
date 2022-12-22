#include <iostream>

/*
IN THIS WE WILL PUT THE SWITCH CASE STATEMENTS IN A FUNCTION
*/

enum PermissionLevel{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permission_level;
};

void printUserData(UserData &user){ //printUserData(UserData user) also works, but the user struct object have more memory than 8 bytes.
                                    //so logical to use reference and allow the compiler to create a pointer to point to where the struct object is saved

    std::cout << user.name << "has the id " << user.id << "is a ";

    switch (user.permission_level)
    {
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << " Instructor" << std::endl;
        break;
    }

    case PermissionLevel::STUDENT:
    {
        std::cout << " Student" << std::endl;
        break;
    }

     case PermissionLevel::ADMIN:
    {
        std::cout << " Admin" << std::endl;
        break;
    }

    case PermissionLevel::TUTOR:
    {
        std::cout << " Tutor" << std::endl;
        break;
    }

    default:
    {
        std::cout << "Unknown State!"<<std::endl;
        break;
    }
    }
}

int main()
{

    /* i want to save the user data
    one solution:
    std::uint32_t id_jishnu = 10;
    std::string name_jishnu = "Jishnu Periya";
    PermissionLevel permission_level_jishnu = STUDENT;

    but in this case the variables are loosely defined and dont have a strucure.
    in this case a struct will help
    */
    UserData jishnu = {"Jishnu Periya", 100214, STUDENT};
    printUserData(jishnu);

    UserData jan; // this way has bit more computational cost than initialization like above.
    jan.id = 100052;
    jan.name = "Jan schraffaneck";
    jan.permission_level = INSTRUCTOR;
    printUserData(jan);

    return 0;
}
