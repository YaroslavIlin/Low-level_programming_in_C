#include "commands.h"

int main() {
    int64_t data[1000];
    int64_t size = 0;
    FILE* input_file = fopen("commands.txt", "r");

    if (input_file == NULL) {
        fprintf(stderr, "Не удалось открыть файл с командами\n");
        return 1;
    }

    char command[10];
    int64_t value;

    while (fscanf(input_file, "%s", command) == 1) {
        if (strcmp(command, "LD") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                LD(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для LD\n");
                break;
            }
        } else if (strcmp(command, "LDN") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                LDN(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для LDN\n");
                break;
            }
        } else if (strcmp(command, "LDI") == 0) {
            LDI(data, &size, input_file);
        } else if (strcmp(command, "ST") == 0) {
            ST(data, size);
        } else if (strcmp(command, "STN") == 0) {
            STN(data, size);
        } else if (strcmp(command, "AND") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                AND(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для AND\n");
                break;
            }
        } else if (strcmp(command, "ANDN") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                ANDN(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для ANDN\n");
                break;
            }
        } else if (strcmp(command, "OR") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                OR(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для OR\n");
                break;
            }
        } else if (strcmp(command, "ORN") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                ORN(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для ORN\n");
                break;
            }
        } else if (strcmp(command, "XOR") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                XOR(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для XOR\n");
                break;
            }
        } else if (strcmp(command, "XORN") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                XORN(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для XORN\n");
                break;
            }
        } else if (strcmp(command, "NOT") == 0) {
            NOT(data, &size);
        } else if (strcmp(command, "ADD") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                ADD(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для ADD\n");
                break;
            }
        } else if (strcmp(command, "SUB") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                SUB(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для SUB\n");
                break;
            }
        } else if (strcmp(command, "MUL") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                MUL(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для MUL\n");
                break;
            }
        } else if (strcmp(command, "DIV") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                DIV(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для DIV\n");
                break;
            }
        } else if (strcmp(command, "GT") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                GT(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для GT\n");
                break;
            }
        } else if (strcmp(command, "GE") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                GE(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для GE\n");
                break;
            }
        } else if (strcmp(command, "EQ") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                EQ(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для EQ\n");
                break;
            }
        } else if (strcmp(command, "NE") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                NE(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для NE\n");
                break;
            }
        } else if (strcmp(command, "LE") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                LE(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для LE\n");
                break;
            }
        } else if (strcmp(command, "LT") == 0) {
            if (fscanf(input_file, "%lld", &value) == 1) {
                LT(data, &size, value);
            } else {
                fprintf(stderr, "Ошибка при чтении параметра для LT\n");
                break;
            }
        } else {
            fprintf(stderr, "Неизвестная команда: %s\n", command);
            break;
        }
    }

    fclose(input_file);

    return 0;
}