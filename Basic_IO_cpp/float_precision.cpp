#include <iostream>
#include <iomanip>  // setprecision

using namespace std;

void precise(float a , float b){
    double res = a/b;
    cout << res << " " << setprecision(3) << fixed << res << endl;
}

int main(){
    float a, b;
    
    cout << "Enter 2 float numbers:\n";
    
    cin >> a >> b;

    precise(a, b);
    
    return 0;
}