#include <iostream>
using namespace std;
void days2years(int &days, int &years) {
    years=days/365;
    days=days%365;
}
int main() {
    int totaldays, years;
    cin>>totaldays;
    days2years(totaldays, years);
}