#include "commands.h"

void LDI(int64_t *data, int64_t *size, FILE *input) {
    int64_t value;
    if (fscanf(input, "%lld", &value) == 1) {
        data[*size] = value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка при чтении из потока данных (LDI)\n");
    }
}

void LD(int64_t *data, int64_t *size, int64_t value) {
    data[*size] = value;
    (*size)++;
}

void LDN(int64_t *data, int64_t *size, int64_t value) {
    if (value == 1)
        data[*size] = 0;
    else if (value == 0)
        data[*size] = 1;
    else
        data[*size] = -value;
    (*size)++;
}

void ST(int64_t *data, int64_t size) {
    printf("Текущий поток данных: ");
    for (int64_t i = 0; i < size; ++i) {
        printf("%lld ", data[i]);
    }
    printf("\n");
}

void STN(int64_t *data, int64_t size) {
    printf("Текущий поток данных: ");
    for (int i = 0; i < size; ++i) {
        if (data[i] == 1)
            printf("%d ", 0);
        else if (data[i] == 0)
            printf("%d ", 1);
        else
            printf("%lld ", -data[i]);
    }
    printf("\n");
}

void AND(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] & value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для AND\n");
    }
}

void ANDN(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] & ~value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для ANDN\n");
    }
}

void OR(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] | value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для OR\n");
    }
}

void ORN(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] | ~value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для ORN\n");
    }
}

void XOR(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] ^ value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для XOR\n");
    }
}

void XORN(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] ^ ~value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для XORN\n");
    }
}

void NOT(int64_t *data, int64_t *size) {
    if (*size > 0) {
        data[*size] = ~data[*size - 1];
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для NOT\n");
    }
}

void ADD(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] + value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для ADD\n");
    }
}

void SUB(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] - value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для SUB\n");
    }
}

void MUL(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] * value;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для MUL\n");
    }
}

void DIV(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        if (value != 0) {
            data[*size] = data[*size - 1] / value;
            (*size)++;
        } else {
            fprintf(stderr, "Ошибка: Деление на ноль\n");
        }
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для DIV\n");
    }
}

void GT(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] > value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для GT\n");
    }
}

void GE(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] >= value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для GE\n");
    }
}

void EQ(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] == value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для EQ\n");
    }
}

void NE(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] != value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для NE\n");
    }
}

void LE(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] <= value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для LE\n");
    }
}

void LT(int64_t *data, int64_t *size, int64_t value) {
    if (*size > 0) {
        data[*size] = data[*size - 1] < value ? 1 : 0;
        (*size)++;
    } else {
        fprintf(stderr, "Ошибка: Пустой поток данных для LT\n");
    }
}