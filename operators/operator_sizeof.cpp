#include <iostream>

using namespace std;

void dataTypes(int a, float b, double c, long long l, string d){
    float p = b/c;
    double q = b/a;
    int r = c/a;
    long long m = r+l;
    cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) << " " << sizeof(m) << endl;
    cout << sizeof(d) << " " << sizeof(d[3]) << " " << endl;
}

int main(){
    int a = 1;
    float b = 2;
    double c = 3;
    long long l = 5;
    string d = "gfgc";
    dataTypes(a, b, c, l, d);
    return 0;
}