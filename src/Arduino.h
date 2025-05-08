#ifndef _ARDUINO_H
#define _ARDUINO_H

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define PROGMEM
#define __FlashStringHelper char
#ifndef SS
#define SS 2
#endif
#define LOW false
#define HIGH true
#define INPUT 0
#define OUTPUT 1
#define F(str) str
#define DEC 10
#define HEX 16

typedef uint8_t byte;

extern class SerialClass {
public:
  inline void begin(int bps) {
  }
  inline void print(const char *msg) {
    printf("%s", msg);
  }
  inline void print(int value) {
    printf("%d", value);
  }
  inline void print(int value, int base) {
    switch (base) {
    case DEC:
      printf("%d", value);
      break;
    case HEX:
      printf("%x", value);
      break;
    default:
      abort();
    }
  }
  inline void println() {
    printf("\n");
  }
  inline void println(const char *msg) {
    printf("%s\n", msg);
  }
  inline void println(int value) {
    printf("%d\n", value);
  }
  inline void println(int value, int base) {
    switch (base) {
    case DEC:
      printf("%d\n", value);
      break;
    case HEX:
      printf("%x\n", value);
      break;
    default:
      abort();
    }
  }
  operator bool() {
    return true;
  }
} Serial;

void setup(); // abstract
void loop(); // abstract
inline void digitalWrite(int pin, bool value) {
  fprintf(stderr, "digitalWrite %d %d\n", pin, value);
}
inline bool digitalRead(int pin) {
  fprintf(stderr, "digitalRead %d\n", pin);
  return false;
}
inline void pinMode(int pin, int mode) {
  fprintf(stderr, "pinMode %d %d\n", pin, mode);
}
inline int millis(void) {
  fprintf(stderr, "millis");
  return 0;
}
inline void yield(void) {
  fprintf(stderr, "yield");
}
inline void delayMicroseconds(int usec) {
  fprintf(stderr, "delayMicroseconds %d\n", usec);
}
inline void delay(int msec) {
  fprintf(stderr, "delay %d\n", msec);
}
inline uint8_t pgm_read_byte(const uint8_t *p) {
  return *p;
}

#endif
