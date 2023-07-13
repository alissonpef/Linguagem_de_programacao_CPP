#include <iostream>

using namespace std;

class Box
{
protected:
    int m_length, m_depth, m_height;

public:
    // constructors and destructor
    Box() : m_length(0), m_depth(0), m_height(0) { cout << "Box class constructor called" << endl; };
    Box(int l, int d, int h) : m_length(l), m_depth(d), m_height(h) { cout << "Box class constructor par called" << endl; };
    ~Box() { cout << "Box class destructor called" << endl; };

    // getters and setters
    int GetLength() const { return m_length; };
    int GetDepth() const { return m_depth; };
    int GetHeight() const { return m_height; };

    void ShowInfo() { cout << "L:" << m_length << " D:" << m_depth << " H:" << m_height << endl; };
};
