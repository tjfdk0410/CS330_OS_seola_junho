// #include <round.h>
// #include <stdint.h>
// #include <stdio.h>

// #define FRACTION (1<<14)
// #define INT_MAX ((1 << 31) - 1)
// #define INT_MIN (-(1 << 31))
// // x and y denote fixed_point numbers in 17.14 format
// // n is an integer



// int int_to_fp(int n) 
// {
//     return n * FRACTION; 
// }
// int fp_to_int_round(int x) 
// {
//     return (x>=0) ? ((x + FRACTION/2) / FRACTION) : ((x-FRACTION/2) /FRACTION); /* FP를 int로 전환(반올림) */
// }
// int fp_to_int(int x) 
// {
//     return x/FRACTION;/* FP를 int로 전환(버림) */
// }
// int fp_add_fp(int x, int y) 
// {
//     return x + y; /* FP의 덧셈 */
// }
// int fp_add_int(int x, int n) 
// {
//     return fp_add_fp(x,  int_to_fp(n));/* FP와 int의 덧셈 */
// }
// int fp_sub_fp(int x, int y)
// { 
//     return x - y; /* FP의 뺄셈(x-y) */
// }
// int fp_sub_int(int x, int n) 
// {
//     return fp_sub_fp(x, int_to_fp(n));/* FP와 int의 뺄셈(x-n) */
// }
// int int_sub_fp(int n, int x) 
// {
//     return fp_sub_fp(int_to_fp(n), x);
// }
// int fp_mult_fp(int x, int y) 
// {
//     return (int)((((int64_t) x)*y)/FRACTION);/* FP의 곱셈 */
// }
// int fp_mult_int(int x, int n) 
// {
//     return x*n;/* FP와 int의 곱셈 */
// }

// int int_mult_fp(int n, int x) 
// {
//     return x*n;/* FP와 int의 곱셈 */
// }

// int fp_div_fp(int x, int y) 
// {
//     return (int)((((int64_t) x) * FRACTION)/y);/* FP의 나눗셈(x/y) */
// }

// int fp_div_int(int x, int n) 
// {
//     return x/n;/* FP와 int 나눗셈(x/n) */
// }

// int int_div_fp(int n, int x) 
// {
//     return n/x;/* FP와 int 나눗셈(x/n) */
// }