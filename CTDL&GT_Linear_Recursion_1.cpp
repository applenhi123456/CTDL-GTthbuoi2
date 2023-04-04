#include <stdio.h>

// Hàm đệ quy tuyến tính tính giai thừa của n
int factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

// Hàm đệ quy tuyến tính tính số Fibonacci thứ n
int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// Hàm đệ quy tuyến tính tính lũy thừa cơ số x mũ n
double power(double x, int n){
    if(n == 0){
        return 1;
    }else if(n > 0){
        return x * power(x, n-1);
    }else{
        return 1 / power(x, -n);
    }
}

int main(){
    // Ví dụ tính giai thừa của 5
    int n = 5;
    int result = factorial(n);
    printf("The factorial of %d is %d\n", n, result);
    
    // Ví dụ tính số Fibonacci thứ 10
    int m = 10;
    int fibo = fibonacci(m);
    printf("The %d-th Fibonacci number is %d\n", m, fibo);
    
    // Ví dụ tính lũy thừa 2^3
    double x = 2;
    int p = 3;
    double pow = power(x, p);
    printf("%f to the power of %d is %f\n", x, p, pow);
    
    return 0;
}
