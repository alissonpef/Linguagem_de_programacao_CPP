#include "box.hpp"

using namespace std;

class Cartoon : public Box
{
private:
    int m_maxWeight;

public:
    // constructors and destructor
    Cartoon() : Box(), m_maxWeight(0) { cout << "Cartoon class constructor called" << endl; };
    Cartoon(int l, int d, int h, int w) : Box(l, d, h), m_maxWeight(w) { cout << "Cartoon class constructor par called" << endl; };
    ~Cartoon() { cout << "Cartoon class destructor called" << endl; };

    // sobrecarga do metodo original de box, para ser completo (peso)
    void ShowInfo() { cout << "L:" << m_length << " D:" << m_depth << " H:" << m_height << " W:" << m_maxWeight << endl; };
};
