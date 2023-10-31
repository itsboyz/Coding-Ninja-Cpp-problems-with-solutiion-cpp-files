#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    while(n!=6){
        switch(n){
               case 1: cin >> a >> b;
                       cout << a + b << endl;
                       break;
               case 2: cin >> a >> b;
                       cout << a - b << endl;
                       break;
               case 3: cin >> a >> b;
                       cout << a * b << endl;
                       break;
               case 4: cin >> a >> b;
                       cout << a / b << endl;
                       break;
               case 5: cin >> a >> b;
                       cout << a % b << endl;
                       break;
               default: cout << "Invalid Operation" << endl;
        }
    }

    return 0;
}
