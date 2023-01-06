#pragma once

#include <iostream>
#include <string>

class Circle
{
public:
    Circle(const float _radius) : m_radius(_radius)
    {
    }

    virtual ~Circle()
    {
    }

    float compute_area() const
    {
        return Circle::PI * Circle::PI * m_radius;
    }

    static float get_pi() // since it returns a static variable. this function stay the same for every instances of this class.
    // therefore keep this function as static
    {
        return Circle::PI;
    }

    /* for the class methods, the keyword static is used only for the declrations.
    means for declaration, you use: static float get_pi();
    and for defeniton you use:
      float Circle::get_pi(){
        /////
       }
    */

private:
    float m_radius;
    static constexpr auto PI = 3.14159F; // this variable is common for all instances of this class
    // here Pi variable is constant and not a instant variable. for every instance it should be
    // same. so make it as static. also make it constant that the instances doesnt change the value

};
