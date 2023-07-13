#ifndef CLERK_MENU_HPP
#define CLERK_MENU_HPP

#include <vector>
#include "Clerk.hpp"

class ClerkMenu
{
private:
    vector<Clerk *> clerks;

    void createClerk();
    void deleteClerk();
    void listClerks();

public:
    ClerkMenu();
    ~ClerkMenu();

    void run();
};

#endif
