#include <iostream>
using namespace std;
int minsNewYear(int *hour, int *min) {
    int cur_min=(*hour)*60+(*min);
    int total_min= 1440;
    return total_min-cur_min;
}
int main() {
    int hour, min;
    cin>>hour>>min;
    int r=minsNewYear(&hour,&min);
    cout<<r<<endl;
}