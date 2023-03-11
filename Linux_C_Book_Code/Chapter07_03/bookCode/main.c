#include <stdio.h>

#include <math.h>

enum coordinate_type { RECTANGULAR = 1, POLAR };
// 复数结构体
struct complex_struct {
    enum coordinate_type t;
    double a,b;
};

// 复数存储表示层
double real_part(struct complex_struct z){
    if(z.t == RECTANGULAR){
        return z.a;
    } else{
        return z.a * cos(z.b);
    }
}

double  imag_part(struct complex_struct z){
    if(z.t == RECTANGULAR){
        return z.b;
    } else{
        return z.a * sin(z.b);
    }
}

double magnitude(struct complex_struct z){
    if(z.t == RECTANGULAR){
        return sqrt(pow(z.a, 2) + pow(z.b, 2));;
    } else {
        return z.a;
    }
}

double angle(struct  complex_struct z){

    if(z.t == RECTANGULAR){
        double PI = acos(-1.0);
        if(z.a > 0){
            return atan(z.b / z.a);
        } else{
            return atan(z.b / z.a) + PI;
        }
    } else {
        return z.b;
    }
}


// 复数运算层
struct  complex_struct real_imag_construct(double x, double y){
    struct  complex_struct z;
    z.t = RECTANGULAR;
    z.a = x;
    z.b = y;
    return  z;
}

struct complex_struct mag_angle_construct(double r, double angle){
    struct  complex_struct z;
    z.t = POLAR;
    z.a = r;
    z.b = angle;
    return z;
}

struct  complex_struct add_complex(struct complex_struct z1, struct  complex_struct z2){
    return real_imag_construct(real_part(z1) + real_part(z2), imag_part(z1) + imag_part(z2));
}

struct  complex_struct sub_complex(struct complex_struct z1, struct complex_struct z2){
    return real_imag_construct(real_part(z1) - real_part(z2), imag_part(z1) - imag_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct complex_struct z2){
    return mag_angle_construct(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1, struct complex_struct z2){
    return mag_angle_construct(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

void print_complex(struct complex_struct z){
    if(imag_part(z) == 0){
        printf("%f\n",real_part(z));
    }else if (imag_part(z) < 0){
        printf("%f%fi\n",real_part(z),imag_part(z));
    } else{
        printf("%f+%fi\n",real_part(z),imag_part(z));
    }
}
int main(void){
    struct complex_struct z1 = {RECTANGULAR, 3.00,4.00};
    struct complex_struct z2 = {POLAR, 5, acos(-1)};
    print_complex(add_complex(z1,z2));
    print_complex(sub_complex(z1,z2));
    print_complex(mul_complex(z1,z2));
    print_complex(div_complex(z1,z2));
}
