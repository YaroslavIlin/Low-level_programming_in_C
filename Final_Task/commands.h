#ifndef COMMANDS_H
#define COMMANDS_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

void LDI(int64_t *data, int64_t *size, FILE *input);
void LD(int64_t *data, int64_t *size, int64_t value);
void LDN(int64_t *data, int64_t *size, int64_t value);
void ST(int64_t *data, int64_t size);
void STN(int64_t *data, int64_t size);
void AND(int64_t *data, int64_t *size, int64_t value);
void ANDN(int64_t *data, int64_t *size, int64_t value);
void OR(int64_t *data, int64_t *size, int64_t value);
void ORN(int64_t *data, int64_t *size, int64_t value);
void XOR(int64_t *data, int64_t *size, int64_t value);
void XORN(int64_t *data, int64_t *size, int64_t value);
void NOT(int64_t *data, int64_t *size);
void ADD(int64_t *data, int64_t *size, int64_t value);
void SUB(int64_t *data, int64_t *size, int64_t value);
void MUL(int64_t *data, int64_t *size, int64_t value);
void DIV(int64_t *data, int64_t *size, int64_t value);
void GT(int64_t *data, int64_t *size, int64_t value);
void GE(int64_t *data, int64_t *size, int64_t value);
void EQ(int64_t *data, int64_t *size, int64_t value);
void NE(int64_t *data, int64_t *size, int64_t value);
void LE(int64_t *data, int64_t *size, int64_t value);
void LT(int64_t *data, int64_t *size, int64_t value);

#endif