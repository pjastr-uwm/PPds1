#include <stdio.h>
int main() {
    int m = 20;   // m =20 , n = , k =
    int n = 4;    // m =20 , n =4 , k =
    int k = 2;    // m =20 , n =4 , k =2
    m += n;       // m =24 , n =4 , k =2
    n -= k;       // m =24 , n =2 , k =2
    k *= 3;       // m =24 , n =2 , k =6
    m /= 2;       // m =12 , n =2 , k =6
    n += m;       // m =12 , n =14 , k =6
    k %= n;       // m =12 , n =14 , k =6
    m <<= 1;      // m =24 , n =14 , k =6
    n >>= 2;      // m =24 , n =3 , k =6
    k ^= m;       // m =24 , n =3 , k =30
    return 0;
}
