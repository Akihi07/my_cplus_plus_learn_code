#include <stdio.h>


struct Rational{
    int x;
    int y;
};

int numerator(struct Rational z){
    return  z.x;
}

int denominator(struct Rational z){
    return z.y;
}

int GCD(int a, int b){
    if(a % b == 0){
        return b;
    } else{
        return GCD(b, a%b);
    }
}

struct Rational rational_construct(int numerator, int denominator){
    struct Rational z = {numerator / GCD(numerator, denominator), denominator / GCD(numerator,denominator)};
    return z;
};


struct Rational add_rational(struct Rational z1, struct Rational z2){
    return rational_construct(numerator(z1) * denominator(z2) + numerator(z2) * denominator(z1),denominator(z1) * denominator(z2));
}

struct Rational sub_rational(struct Rational z1, struct Rational z2){
    return rational_construct(numerator(z1) * denominator(z2) - numerator(z2) * denominator(z1),denominator(z1) * denominator(z2));
}

struct Rational mul_rational(struct Rational z1, struct Rational z2){
    return rational_construct(numerator(z1) * numerator(z2), denominator(z1) * denominator(z2));
}

struct Rational div_rational(struct Rational z1, struct Rational z2){
    return rational_construct(numerator(z1) * denominator(z2),denominator(z1) * numerator(z2));
}
void print_rational(struct Rational z){
    if(denominator(z) == 1){
        printf("%d\n",numerator(z));
    } else{
        printf("%d/%d\n",numerator(z),denominator(z));
    }
}



int main() {
    struct Rational z1 = rational_construct(2,4);
    struct Rational z2 = rational_construct(1,4);
    print_rational(add_rational(z1,z2));
    print_rational(sub_rational(z1,z2));
    print_rational(mul_rational(z1,z2));
    print_rational(div_rational(z1,z2));
}
