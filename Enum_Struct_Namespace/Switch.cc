#include <iostream>


enum PermissionLevel{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
};


int main()
{

    PermissionLevel permission_level_jishnu = STUDENT;
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;

    switch (permission_level_jan)
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
