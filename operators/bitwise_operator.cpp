#include <iostream>

using namespace std;

void bitWiseOperation(int a, int b, int c){
    unsigned int d, e, f, g;
    d = a^a;
    e = c^b;
    f = a&b;
    g = c | (a^a);

    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",~e);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}