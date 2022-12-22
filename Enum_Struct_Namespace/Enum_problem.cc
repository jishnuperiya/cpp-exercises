#include <iostream>

/*
IN THIS WE WILL Discuss the problem with C-style enums
*/

enum PermissionLevel{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};

enum ServerGroup
{
    INSTRUCTOR = 1,  // will not work! becuase the ADMIN variable in the enum PermissionLevel is global (in c style enums). which is stupid! --> solution enum class in c++.
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

    UserData jishnu = {"Jishnu Periya", 100214, STUDENT};
    printUserData(jishnu);

    UserData jan;
    jan.id = 100052;
    jan.name = "Jan schraffaneck";
    jan.permission_level = INSTRUCTOR;
    printUserData(jan);

    return 0;
}
