//
// Created by haohe on 2023/2/26.
//

#include "arrays_learn.h"


/*
* Array has fixed size, vector can expand size
* */
#include "string"
#include "iostream"
#include "iterator"


using namespace std;

int initialize_and_access(){
    /*
    * array initialize
    *   1.array dimensions must be a const expression
    *     for compiler need to know the dimensions during compile time
    *
    *   2.array needs to hold object, so there is no array of references
    *
    * Questions:
    * 1. as with variables of built-in type, a default-initialized array of built-in type that is defined
    *   inside a function will have undefined values.
    * */
    unsigned cnt = 42;  // not a const expression
    constexpr unsigned sz = 3;
    const unsigned tn = 42;
    int int_num = 10;

    int arr1[10];
    string arr2[cnt];

    /*
    * list initialize
    *   1. we can omit the dimensions with list initialize method
    *       if we declare the dimensions "d" and also list initializer(size="n") such as {a, b, c, ..}
    *           if d >= n:
    *               no errors, and utilize list initializer to initialize and remaining with default value
    *           if d < n:
    *               raise errors, too many objects
    * */

    int ia1[sz] = {0,1,2};
    int a2[] = {0, 1 ,2};
    int a3[5] = {0, 1, 2};
    // int a4[2] = {0, 1, 2}; raise errors

    /*
    * character arrays
    *   it can be initialized with a string, and the null character of the string will be copied also.
    * */

    // char a4[6] = "Daniel";  //Initializer-string for char array is too long


    /*
    * array can not accept for copy assignment (standard declaration)
    *   we cannot assign an array as a copy of another array
    *   it is also illegal to assign one array to another
    * */

    /*
    * array of pointers v.s. pointer to an array
    * */

    int *ptrs[10];  // read from right to left

    int (*Parray)[10]; // read from in to out, parray is a pointer, which points to an array (right) with 10 ints(left)

    int (&Rarray)[10] = arr1; // Rarray refer to an 10 elements array

    /*
    * array initialize values discuss
    *
    * */
    int ia[10] = {}; // if we do not initialize ia, then the values should be undefined

    for (const auto &item: ia){
        cout << item << endl;
    }
    return 0;
}

void pointers_and_arrays(){
    /*
    * compiler converts array to a pointer
    * */
    string nums[] = {"one", "two", "three"};
    string *p = &nums[0];

    // nums is a pointer and is equal to the address of the first element in array
    cout << "nums index " << nums << endl;
    cout << "p index " << p << endl;
    cout << (nums == p ) << endl;

    // test2
    // although ia is an array, when we use ia as initializer, the compiler converts ia to a pointer
    int ia[] = {1,2,3,4,5,6,7,8,9,0};
    auto ia2 = ia;
    *ia2 = 10;

    for (const auto &item: ia){
        cout << item << " ";
    }
    cout << endl;
    // however when we used decltype, then it returns the type of arrays
    decltype(ia) ia3;
    // ia3 = ia; // ia3 int[10] is not assignable

    /*
    * pointers of array can support more operators
    * 1. work as iterator
    *       a.dereference
    *       b. increment
    *       c. comparisons
    *       d. addition of an integral value
    *       e. subtraction of two pointers
    * */
    int arr[] = {0,1,2,3,4,5};
    int *pt = arr;
    cout << *(++pt) << endl;

    /*
    * array is not a class, so it do not have member functions named
    *   begin, end
    * Instead, those functions are defined in iterator.h
    *   for array, it works with format
    *       begin(array)
    *       end(array)
    * */
    int *begin = std::begin(arr);
    int *end = std::end(arr);

    cout << "begin: " << begin << ";" << "end: " << end << endl;
    while (begin != end){
        cout << *begin;
        begin++;
    }
    cout << endl;

    // d. pointers addition operator
    // arr 0xa713dffa90 pt2 0xa713dffaa4, step of index is a byte(8bit), an int is 4 byte length
    // so increase 5, means 5 ints(4bytes) = 5 * 4(bytes) = 20 bytes = 0x14;
    int *pt2 = arr + 10;
    *pt2 = 10;
    cout << arr << "   ";
    cout << *pt2 << endl; // this may raise errors, since pt2 points undefined values
    auto res = pt2 - arr;

    /*
    * e. comparison of pointer
    * we cannot use relational operators on pointers of two unrelated objects
    * */
    int i = 0, sz = 42;
    int *pt3 = &i, *e = &sz;

    cout << "pt3 compare with e is " << (pt3 < e) << endl;


    int *pt4 = &arr[1], *pt5 = &arr[4];
    cout << "pt4: "<< pt4 << " pt5: "<< pt5 <<endl;

    pt4 += pt5 - pt4;

    cout << "pt4: "<< pt4 << " pt5: "<< pt5 <<endl;


}

void c_style_string(){
    /*
    * do not use c style string in c++
    *
    * c style string func, defined in cstring.h
    *       strlen(p)
    *       strcmp(p1, p2)
    *       strcat(p1, p2)
    *       strcpy(p1, p2)
    * - these functions do not verify whether the string is null-terminated
    * - these functions operate on c-style strings
    *
    * c++ string has two types:
    *       1. string library strings
    *       2. c-style strings
    * */

    /*
    * string compare in library string and c-style string
    * */
    // 1. library string
    std::string s1 = "A string example";
    std::string s2 = "A different string";
    // compare the string itself
    std::cout << "s1 < s2 = " << (s1 < s2) << std::endl;

    // 2. c-style string
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";
    // operate on c-style string compares the pointer value
    std::cout << "s1 < s2 = " << (ca1 < ca2) << std::endl;
    // for c-style strings, use strcmp  func


    const char ca[] = {'h','e','l','l','o', '\0'};
    const char *p = ca;
    while (*p) {
        cout << *p << endl;
        ++p;
    }

    /*
    * interfacing of c library to c-style character strings
    *
    * string library provide member function c_str
    *       it returns a pointer to the beginning of null-terminated character array
    * */

    const char *str = s1.c_str();
    cout << *(str + 5) << endl;


}

void multi_dimensional_arrays(){
    /*
    * 0000
    * 4000
    * 8000
    * */
    int ia[3][4] = {{0},{4},{8}};

    for (const auto &item: ia){
        for (const auto &num: item){
            cout << num ;
        }
        cout << endl;
    }

    typedef int (*int_array)[4];

    int a = 1;
    int_array pt = &(*ia);
    // int_array b = {&a, &a, &a, &a};

}

int main(){

    // initialize_and_access()

    // pointers_and_arrays();

    // c_style_string();

    multi_dimensional_arrays();

}
