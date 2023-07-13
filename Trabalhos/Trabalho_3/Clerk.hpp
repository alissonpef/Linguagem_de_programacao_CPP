#ifndef CLERK_HPP
#define CLERK_HPP

using namespace std;

class Clerk
{
protected:
    string name_clerk;
    string position;
    double salary;

public:
    Clerk(string name, string position, double salary);
    virtual ~Clerk();

    virtual void print_clerk();
    Clerk& operator%(double percentage); 
};

#endif
