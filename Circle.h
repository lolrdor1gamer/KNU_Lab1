#pragma once
#include <cmath>

class Circle
{
private:
    float z_x, z_y, z_r;

public:
    Circle() : z_x(10), z_y(10), z_r(1)
    {

    }
    Circle(float x, float y, float radius) : z_x(x), z_y(y), z_r(radius)
    {

    }
    Circle(const Circle& circle) : z_x(-circle.m_x), z_y(circle.m_y), z_r(circle.m_r)
    {

    }
    float Square()
    {
        return float( M_PI ) * z_r * z_r;
    }

public:
    __declspec(property(get = zget_xcoord)) float m_x;
    const float& zget_xcoord() const { return  z_x; }
    __declspec(property(get = zget_ycoord)) float m_y;
    const float& zget_ycoord() const { return  z_y; }
    __declspec(property(get = zget_radius)) float m_r;
    const float& zget_radius() const { return  z_r; }
};
