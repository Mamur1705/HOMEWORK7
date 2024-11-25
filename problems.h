#include "cmath"


// Problem 1
void days2years(int &days, int &years) {
    years=days/365;
    days=days%365;
}


// Problem 2
double func(double *x, double *y) {
    *y=11*pow(*x, 3)/3+5;
    return *y;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
    int cur_min=(*hour)*60+(*min);
    int total_min= 1440;
    return total_min-cur_min;
}


// Problem 4
double probability(int *A,int *B) {
    int win=0;
    int probability=6;
    for(int D=0;D<6;D++) {
        if(D>*A && D>*B || D==*A || D==*B) {
            win++;
        }
    }
    return double(win)/probability;
}


// Problem 5
int presses(int *x) {
    int num=*x%10;
    int apartment=0;
    int temp=*x;
    while(temp>0) {
        apartment++;
        temp=temp/10;
    }
    int total=0;
    for(int i=1;i<=num;i++) {
        int max_apartment=4;
        if(i==num) {
            max_apartment=apartment;
        }
        for(int j=1;j<=max_apartment;j++) {
            total=total+j;
        }
    }
    return total;
}