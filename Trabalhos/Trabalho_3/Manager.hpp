#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "Clerk.hpp"

class Manager : public Clerk
{
public:
    Manager(string name, string position, double salary);
    void print_clerk() override;
};

#endif
