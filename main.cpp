#include <cassert>

struct TriangleNumbercalculator {

    int value (int n) {

        if (n == 0) return 0;

        int result = n + value(n-1);

        return result;
    }

    int add (int n, int m) {return value(n) + value(m);}

    int subtract (int n, int m) {return value(n) - value(m);}
};

int main () {

    TriangleNumbercalculator calc1;

    assert(calc1.value(1) == 1);
    assert(calc1.value(2) == 3);
    assert(calc1.value(4) == 10);

    assert(calc1.add(1,1) == 2);
    assert(calc1.add(2,3) == 9);
    assert(calc1.add(4,2) == 13);

    assert(calc1.subtract(1,1) == 0);
    assert(calc1.subtract(2,3) == -3);
    assert(calc1.subtract(4,2) == 7);

}