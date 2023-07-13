#ifndef TRAINEE_HPP
#define TRAINEE_HPP

#include "Clerk.hpp"

class Trainee : public Clerk
{
public:
    Trainee(string name, string position, double salary);
    void print_clerk() override;
};

#endif
