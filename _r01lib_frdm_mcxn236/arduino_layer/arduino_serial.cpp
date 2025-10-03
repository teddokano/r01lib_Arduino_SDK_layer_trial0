#include "arduino_serial.h"
#include <cstdio>
#include <string>
#include <string_view>
#include <cstdlib>

void SerialClass::begin(int baud) {
    mcu_init_stdio(baud);
}

void SerialClass::print(const char *s) {
    printf("%s", s);
}

void SerialClass::print(int n, int base) {
    print((long)n, base);
}

void SerialClass::print(unsigned int n, int base) {
    print((unsigned long)n, base);
}

void SerialClass::print(long n, int base) {
    char buf[33];
    switch (base) {
        case BIN:
            snprintf(buf, sizeof(buf), "%ld", n);
            for (int i = sizeof(long) * 8 - 1; i >= 0; --i)
                buf[sizeof(long) * 8 - 1 - i] = ((n >> i) & 1) ? '1' : '0';
            buf[sizeof(long) * 8] = '\0';
            printf("%s", buf);
            break;
        case OCT:
            snprintf(buf, sizeof(buf), "%lo", n);
            printf("%s", buf);
            break;
        case DEC:
            snprintf(buf, sizeof(buf), "%ld", n);
            printf("%s", buf);
            break;
        case HEX:
            snprintf(buf, sizeof(buf), "%lX", n);
            printf("%s", buf);
            break;
        default:
            snprintf(buf, sizeof(buf), "%ld", n);
            printf("%s", buf);
            break;
    }
}

void SerialClass::print(unsigned long n, int base) {
    char buf[33];
    switch (base) {
        case BIN:
            for (int i = sizeof(unsigned long) * 8 - 1; i >= 0; --i)
                buf[sizeof(unsigned long) * 8 - 1 - i] = ((n >> i) & 1) ? '1' : '0';
            buf[sizeof(unsigned long) * 8] = '\0';
            printf("%s", buf);
            break;
        case OCT:
            snprintf(buf, sizeof(buf), "%lo", n);
            printf("%s", buf);
            break;
        case DEC:
            snprintf(buf, sizeof(buf), "%lu", n);
            printf("%s", buf);
            break;
        case HEX:
            snprintf(buf, sizeof(buf), "%lX", n);
            printf("%s", buf);
            break;
        default:
            snprintf(buf, sizeof(buf), "%lu", n);
            printf("%s", buf);
            break;
    }
}

void SerialClass::print(double n) {
    printf("%f", n);
}

void SerialClass::print(char c) {
    printf("%c", c);
}

void SerialClass::print(const std::string& s) {
    printf("%s", s.c_str());
}

void SerialClass::print(std::string_view s) {
    printf("%.*s", (int)s.size(), s.data());
}

void SerialClass::println(void) {
    printf("\n");
}

void SerialClass::println(const char *s) {
    print(s);
    println();
}

void SerialClass::println(int n, int base) {
    print(n, base);
    println();
}

void SerialClass::println(unsigned int n, int base) {
    print(n, base);
    println();
}

void SerialClass::println(long n, int base) {
    print(n, base);
    println();
}

void SerialClass::println(unsigned long n, int base) {
    print(n, base);
    println();
}

void SerialClass::println(double n) {
    print(n);
    println();
}

void SerialClass::println(char c) {
    print(c);
    println();
}

void SerialClass::println(const std::string& s) {
    print(s);
    println();
}

void SerialClass::println(std::string_view s) {
    print(s);
    println();
}

// Dummy implementation for mcu_init_stdio
void SerialClass::mcu_init_stdio(int baud) {
    // Implement MCU-specific stdio initialization here
}

SerialClass Serial;