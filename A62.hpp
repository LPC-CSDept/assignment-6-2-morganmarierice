//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{
    double nthpower = 1;
    for(int i=1; i<=n; i++)
        {
        nthpower *= 2;
        }
    return(nthpower); // return n_th power number
}
double nthpowern(int n)
{
    double nthpower = 1;
    n = n * -1;
    for(int i=1; i<=n; i++)
        {
        nthpower *= 2;
        }
    nthpower = 1.0 / nthpower;
    return(nthpower);  // return n_th power number
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
