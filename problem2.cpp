#include <iostream>
#include <cmath>
using namespace std;
double func(double *x, double *y) {
     *y=11*pow(*x, 3)/3+5;
    return *y;
}
int main() {
    double x, m;
    cin>>x;
    func(&x, &m);
    cout<<m<<endl;
}