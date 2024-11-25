#include <iostream>
using namespace std;
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
int main() {
    int x;
    cin>>x;
    int a=presses(&x);
    cout<<a<<endl;
    return 0;
}