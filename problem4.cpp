#include <iostream>
using namespace std;
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
int main() {
    int A, B;
    cin>>A>>B;
    double res=probability(&A,&B);
    cout<<res<<endl;
}