#ifndef STARTER_H
#define STARTER_H
#include <stdio.h>
#include <stdlib.h>
#endif

int LAST_USED_REGISTER = -1;

int getFreeReg(); // Allocate a free register

void freeLastReg(); // Free the last used register
