#include <iostream>

/*
IN THIS WE WILL Discuss enum class
*/

enum class PermissionLevel{ // c++ modification of c style enums
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

enum class ServerGroup
{
    INSTRUCTOR = 1,  // will work! becuase the ADMIN variable is not global now.
    ADMIN = 1,
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permission_level;
};

void printUserData(UserData &user){
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

    UserData jishnu = {"Jishnu Periya", 100214, PermissionLevel::STUDENT}; // now you cant use just STUDENT
    printUserData(jishnu);

    UserData jan;
    jan.id = 100052;
    jan.name = "Jan schraffaneck";
    jan.permission_level = PermissionLevel::INSTRUCTOR;
    printUserData(jan);

    return 0;
}
