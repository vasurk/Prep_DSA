#include<iostream>

using namespace std;

struct cust{
    int p;
    cust (int q)
    : p(q)
    {

    }
    cust() = default;
};

int main()
{
    int *p = new int(25);

    float *q = new float(75.25);

    cust * var1 = new cust;

    cust * var = new cust(25);

    cout << *p << " " << *q << " " << var->p;
    return 0;
}