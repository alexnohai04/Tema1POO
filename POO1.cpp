#include "pizza.h"

int main()
{
    Ingredient i1("Piper", 0.5, 10), i2("Nimic", 0.0, 0);
    cout << i1;
    cin >> i2;
    i1 += 500; // aduna o valoare la cantitatea disponibila
    cout << i1;
    Ingredient i3 = i1, i4, i5(i1);
    i4 = i1;
    Pizza pizza1("Clasic"), pizza2;
    pizza1 = pizza1 + i1; // adaugare ingredient 1 in pizza 1 */ 
    cin >> pizza2;
    cout << pizza1 << pizza2;
 /*  if (pizza1 > pizza2) cout << "pizza1 are mai multe ingrediente decat pizza2";
    else cout << "pizza2 are mai multe ingrediente decat pizza1";
 */
    return 0;
} 