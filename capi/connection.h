#pragma once

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

int connect(char *device, int baudrate, int timeout);
void open();
void close();
int write(char *input);
char* read();

#ifdef __cplusplus
}
#endif