#include <iostream>
using namespace std;

int power(int a, int b) {
    int result = 1;
    
    for (int i = 1; i <= b; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    char yn = 'y';
    while (yn == 'y' || yn == 'Y') {
    int a,b;

    cout << "Enter a number:\n";
    cin >> a;

    cout << "Enter the power of the number:\n";
    cin >> b;

    if (a == 0 && b == 0) 
    {
        cout << "Not Defined" << endl;
    }
    else if (a == 0) 
    {
        cout << "0" << endl;
    }
    else if (b == 0) 
    {
        cout << "1" << endl;
    }
    else if (b < 0) 
    {
        int ans = power(a,-b);

        cout << "1/" << ans << endl;
    }
    else 
    {
    int ans = power(a,b);

    cout << ans << endl;
    }
    cout << "Do you want to continue? (y for yes / n for no):\n";
    cin >> yn;
}
    return 0;
}