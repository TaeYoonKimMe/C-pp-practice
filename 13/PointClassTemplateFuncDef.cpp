#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
    T xpos;
    T ypos;

public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
};

template <typename T>
Point<T>::Point(T x, T y)
    : xpos(x), ypos(y)
{
}

template <typename T>
void Point<T>::ShowPosition() const
{
    cout << '[' << xpos << ", " << ypos << ']' << endl;
}