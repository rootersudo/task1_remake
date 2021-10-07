#include <iostream>
using namespace std;
void check(int c1) {
    int a, b, c, d, q;
    q = 1;
    if ((c1 > 9999) or (c1 < 1000))
    {
        while (true) {

            cout << "¬ведено неверное число, попробуйте ещЄ раз\n";
            cin >> c1;
            if ((c1 > 1000) and (c1 < 100000)) { break; }

        } q = 1;
    }
    if (q == 1) {
        a = c1 / 1000;
        b = c1 % 1000 / 100;
        c = c1 % 100 / 10;
        d = c1 % 10;
        if (b == 0) {
            cout << a << d << c << endl;
        }
        else {
            cout << b << a << d << c << endl;
        }
    };

}
int c1;
int main()
{
    while (true) {

        setlocale(0, "RU");
        cout << "¬ведите четырЄхзначное число  ***вводите только цифры*** \n";
        cin >> c1;
        check(c1);
    }
}