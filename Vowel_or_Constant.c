#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercase_vowel =(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant but not a vowel .", c);
    return 0;
}
/*
- In C, the == operator checks equality. But it only compares one value at a time.
So if you want to know whether c is one of several characters, you must test each case separately.
- Logical OR (||)
The || operator means "or".
The condition becomes true if any one of the comparisons is true.
Example:
- If c == 'A' → true
- If c == 'E' → true 
- …and so on.
If none match, the whole expression is false.
- Why not write c == 'A' || 'E' || 'I' ...?
That looks shorter, but it’s wrong in C.
- 'E' by itself is a constant (its ASCII value).
- In C, nonzero values are treated as true.
- So c == 'A' || 'E' always evaluates to true, because 'E' is nonzero.
That’s why you must explicitly write c == 'E'.
*/