//
// Created by 11071 on 2021/11/29.
//
/**
 * 代码分层
 *      结构定义
 *      存储表示
 *      运算层
 * 分层可以解耦合
 * 当其中一层代码发生变化时，其他层的代码可能不需要进行改变
 *
 */


#include <stdio.h>
#include <math.h>

// 复数结构体
struct complex_struct {double x,y;};

// 复数存储表示层
double real_part(struct complex_struct z){
    return z.x;
}

double  imag_part(struct complex_struct z){
    return z.y;
}

double magnitude(struct complex_struct z){
    return  sqrt(pow(z.x,2) + pow(z.y,2));
}

double angle(struct  complex_struct z){
    double PI = acos(-1.0);
    if(z.x >0){
        return atan(z.y / z.x);
    } else{
        return atan(z.y / z.x) + PI;
    }
}


// 复数运算层
struct  complex_struct real_imag_construct(double x, double y){
    struct  complex_struct z;
    z.x = x;
    z.y = y;
    return  z;
}

struct complex_struct mag_angle_construct(double r, double angle){
    struct  complex_struct z;
    z.x = r * cos(angle);
    z.y = r * sin(angle);
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
/*
 * 基础版本 虚数相加
struct  complex_struct add_complex_struct(struct  complex_struct z1, struct  complex_struct z2){
    z1.x = z1.x + z2.x;
    z1.y = z1.y + z2.y;
    return z1;
};
 */

/*
 * 基础版打印程序
 void  sys_out(struct  complex_struct z){
    if (z.y < 0){
        printf("%f%fi",z.x,z.y);
    } else{
        printf("%f+%fi",z.x,z.y);
    }
};*/

int main(void){
    /*
     * 1.定义Tag，格式化输出
     * struct complex_struct  z;
    double x = 3.0; z.x = x; z.y = 4.0;
    if (z.y < 0)
        printf("z=%f%fi\n", z.x, z.y);
    else
        printf("z=%f+%fi\n", z.x, z.y);
    */

    /**
     * 1. 定义Tag作为参数传递，完成相加的函数
     * 2. main 的栈帧和 add_complex 栈帧是两个栈帧
     * struct  complex_struct z = {3.00, 4.00};
     * struct  complex_struct add_res = add_complex_struct(z, z);
     * sys_out(add_res);
     */

    struct complex_struct z = {3.00,4.00};
    print_complex(add_complex(z,z));
    print_complex(sub_complex(z,z));
    print_complex(mul_complex(z,z));
    print_complex(div_complex(z,z));
}