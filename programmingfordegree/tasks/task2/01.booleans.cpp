#include <iostream>
using namespace std;

int main() {
    cout << "a) true and true: " << (true && true) << endl;

    cout << "b) false and true: " << (false && true) << endl;

    cout << "c) 1 == 1 and 2 == 1: No sense" << endl;

    cout << "d) \"test\" == \"test\": " << ("test" == "test") << endl;

    cout << "e) 1 == 1 or 2 == 1: No sense" << endl;

    cout << "f) true and 1 == 1: " << (true && (1 == 1)) << endl;

    cout << "g) \"test\" == \"testing\": " << ("test" == "testing") << endl;

    cout << "h) 1 == 0 and 2 == 1: No sense" << endl;

    cout << "i) \"\" == '': No sense" << endl;

    cout << "j) \"test\" == 1: No sense" << endl;

    cout << "k) not (true and false): " << !(true && false) << endl;

    cout << "l) not (1 == 1 and 0 == 1): " << !(1 == 1 && 0 == 1) << endl;

    cout << "m) not (10 == 1 or 100 == 100): No sense" << endl;

    cout << "n) not (1 == 10 or 3 == 4): No sense" << endl;

    cout << "o) not (\"testing\" == \"testing\" and \"Zed\" == \"Cool Guy\"): " << !(("testing" == "testing") && ("Zed" == "Cool Guy")) << endl;

    cout << "p) 1 == 1 and not (\"testing\" == 1 or 1 == 0): No sense" << endl;

    cout << "q) \"chunky\" == \"bacon\" and not (3 == 4 or 3 == 3): No sense" << endl;

    cout << "r) 3 == 3 and not (\"testing\" == \"testing\" or \"Ruby\" == \"Fun\"): No sense" << endl;

    return 0;
}
