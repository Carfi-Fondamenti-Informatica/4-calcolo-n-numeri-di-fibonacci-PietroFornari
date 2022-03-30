#include <iostream>
using namespace std;

int main() {
    int n=0, p=0, s=1, t=0;
    cin >> n;
    if (n>=2) {
        for (int i=1; i<=n; i++){
            t = p+s;
            s=p;
            p=t;
            cout << t << endl;
        }
    }else{
        cout << "errore" << endl;
    }

    return 0;
}
