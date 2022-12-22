#include <iostream>


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
    UserData jan = {"Jishnu Periya", 100214, INSTRUCTOR};

    switch (jishnu.permission_level)
    {
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << " Hello Instructor" << std::endl;
        break;
    }

    case PermissionLevel::STUDENT:
    {
        std::cout << " Hello student" << std::endl;
        break;
    }

     case PermissionLevel::ADMIN:
    {
        std::cout << " Hello admin" << std::endl;
        break;
    }

    case PermissionLevel::TUTOR:
    {
        std::cout << " Hello tutor" << std::endl;
        break;
    }

    default:
    {
        std::cout << "Unknown State!"<<std::endl;
        break;
    }
    }

    return 0;
}
