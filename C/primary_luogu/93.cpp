#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 手动实现字符串反转函数
void reverse_str(char *s) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

// 优化后的质数检测函数
bool is_prime(unsigned long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    unsigned long long sqrt_n = sqrt(n);
    // 确保sqrt_n是精确的整数下界
    while (sqrt_n * sqrt_n > n) sqrt_n--;
    
    for (unsigned long long i = 5; i <= sqrt_n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// 优化的回文数生成函数
void generate_palindromes(unsigned long long N) {
    unsigned long long len = 0;
    unsigned long long temp = N;
    
    // 计算数字位数
    while (temp > 0) {
        len++;
        temp /= 10;
    }
    
    // 最大允许的回文数位数（奇数位）
    unsigned long long max_len = (len % 2 == 1) ? len : len - 1;
    
    for (unsigned long long L = 3; L <= max_len; L += 2) {
        unsigned long long half_len = (L + 1) / 2;
        unsigned long long start = 1ULL << (half_len - 1); // 10^(half_len-1)
        unsigned long long end = (1ULL << half_len) - 1;
        
        char prefix[20];
        char palindrome[20];
        
        // 调整上限防止溢出
        while (start <= end) {
            snprintf(prefix, sizeof(prefix), "%llu", start);
            unsigned long long prefix_len = strlen(prefix);
            
            // 构造回文数（奇数位）
            snprintf(palindrome, sizeof(palindrome), "%s%.*s", 
                     prefix, prefix_len - 1, prefix);
            
            unsigned long long num = strtoull(palindrome, NULL, 10);
            
            if (num > N) {
                end = start - 1;
            } else {
                start++;
            }
        }
        
        if (end < start) continue;
        
        for (unsigned long long seed = start; seed <= end; seed++) {
            snprintf(prefix, sizeof(prefix), "%llu", seed);
            unsigned long long prefix_len = strlen(prefix);
            
            // 构造回文数字符串
            snprintf(palindrome, sizeof(palindrome), "%s%.*s", 
                     prefix, prefix_len - 1, prefix);
            
            unsigned long long num = strtoull(palindrome, NULL, 10);
            
            if (num > N) break;
            
            if (is_prime(num)) {
                printf("%llu\n", num);
            }
        }
    }
}

int main() {
    unsigned long long N;
    scanf("%llu", &N);
    
    // 处理特例
    if (N >= 2) puts("2");
    if (N >= 3) puts("3");
    if (N >= 5) puts("5");
    if (N >= 7) puts("7");
    if (N >= 11) puts("11");
    
    // 生成奇数位回文数
    generate_palindromes(N);
    
    return 0;
}
