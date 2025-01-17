#ifndef CUBICSERVER_VECTOR2_H
#define CUBICSERVER_VECTOR2_H

#include <iostream>
#include <cmath>

template <typename T>
class Vector2
{
public:
    Vector2(T nx, T ny) noexcept : x(nx), y(ny) {}
    Vector2() noexcept = default;
    ~Vector2() noexcept = default;

    T distance(const Vector2 &other) const
    {
        return std::sqrt(std::pow((other.x - this->x), 2) + std::pow((other.y - this->y), 2));
    }

    T magnitude() const
    {
        return std::sqrt(this->x * this->x + this->y * this->y);
    }

    Vector2 normalized() const noexcept
    {
        T mag = this->magnitude();
        return Vector2(this->x / mag, this->y / mag);
    }

    void normalize() noexcept
    {
        T mag = this->magnitude();

        this->x /= mag;
        this->y /= mag;
    }

    T dot_product(const Vector2 &other) noexcept
    {
        return this->x * other.x + this->y * other.y;
    }

    Vector2 operator+(const Vector2 &other) noexcept
    {
        return Vector2<T>(other.x + this->x, other.y + this->y);
    }

    Vector2 operator+=(const Vector2 &other) noexcept
    {
        this->x += other.x;
        this->y += other.y;

        return *this;
    }

    Vector2 operator-(const Vector2 &other) noexcept
    {
        return Vector2<T>(other.x - this->x, other.y - this->y);
    }

    Vector2 operator-=(const Vector2 &other) noexcept
    {
        this->x -= other.x;
        this->y -= other.y;

        return *this;
    }

    Vector2 operator*(const Vector2 &other) noexcept
    {
        return Vector2<T>(other.x * this->x, other.y * this->y);
    }

    Vector2 operator*=(const Vector2 &other) noexcept
    {
        this->x *= other.x;
        this->y *= other.y;

        return *this;
    }

    Vector2 operator/(const Vector2 &other) noexcept
    {
        return Vector2<T>(other.x / this->x, other.y / this->y);
    }

    Vector2 operator/=(const Vector2 &other) noexcept
    {
        this->x /= other.x;
        this->y /= other.y;

        return *this;
    }

    Vector2 operator%(const Vector2 &other) noexcept
    {
        return Vector2<T>(other.x % this->x, other.y % this->y, other.z % this->z);
    }

    Vector2 operator%=(const Vector2 &other) noexcept
    {
        this->x %= other.x;
        this->y %= other.y;

        return *this;
    }

    Vector2 &operator=(const Vector2 &other) noexcept
    {
        this->x = other.x;
        this->y = other.y;

        return *this;
    }

    bool operator==(const Vector2 &other) const noexcept
    {
        return this->x == other.x && this->y == other.y;
    }

    T x;
    T y;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Vector2<T> &v)
{
    o << "x : " << v.x << " | " << "y : " << v.y;
    return o;
}


#endif //CUBICSERVER_VECTOR2_H
