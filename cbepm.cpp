// cbe.cpp
// coefficient base exponent
#include <iostream>
useing namespace std;

long double cbe(double c, double b, int e){
    long double value = 1;
    double exponent = e;
    while(exponent > 0 && e!= 0){
         value = b * value;
         exponent--;

    }
    return c*value;
}

int main(){
    long double y;
    int x;
    cout.precision
    cout << "x\ty\n";
    for (x = 0; x < 33; x++){
        cout << x<<"\t" << cbe(1,2,x)<<endl
      }//end x
    for
    cout << cbe(1,2,10);
    return 0;
