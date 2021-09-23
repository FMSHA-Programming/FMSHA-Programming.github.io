---
layout: page
title: Конспекты уроков
date: 2021-09-09
---

# 9 сентября 2021

**Упражнение 1**. Написать программу, которая считывает целое число с клавиатуры и выводит квадрат и куб этого числа в консоль. Вычисление квадрата и куба реализовать через функции, которые вызываются из функции `main`.

Продолжаем уточнять наши знания основ языка Си.

## Базовые типы данных

### Целочисленные типы

```c
char ch = 'a';
printf("%d", ch);  // 97

short s;
printf("%d", s);

int a;
printf("%d", a);

unsigned b;  // unsigned int b;
printf("%u", a);

long c;  // long int c;
printf("%ld", c);

unsigned long d;
printf("%lu", d);

long long e;
printf("%lld", e);

unsigned long long f;
printf("%llu", f);
```

Размер типа не гарантируется стандартном. Оператор `sizeof` позволяет узнать размер переменной в байтах:

```c
char ch;
sizeof(ch);  // 1
```

Диапазон знаковых целых чисел размера `n` бит: от `-2^{n-1}` до `2^{n-1} - 1`. Диапазон беззнаковых целых чисел размера `n` бит: от `0` до `2^n`. В библиотеке [`<limits.h>`](https://ru.wikipedia.org/wiki/Limits.h) оперделены константы с минимальными и максимальными значениями разных типов. Например:

```c
#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    printf("Size of int: %ld bytes\n", sizeof(a));
    printf("int:  %d %d\n", INT_MIN, INT_MAX);
    printf("uint: %u\n", UINT_MAX);
    
    return 0;
}
```

На компьютере автора получился следюющий результат:

```bash
Size of int: 4 bytes
int:  -2147483648 2147483647
uint: 4294967295
```

### Числа с плавающей точкой

```c
float x;
double y;
long double z;

printf("%f", x);
printf("%lf", y);
printf("%Lf", z);
```

В библиотеке [`<float.h>`](https://ru.wikipedia.org/wiki/Float.h) определены различные константы для чисел сплавающей точкой, например:

* `DBL_DIG` - количество верных десятичных цифр для типа `double`
* `DBL_EPSILON` - минимальное положительное `х` такое, что `1.0 + x != 1.0`

```c
printf("%d\n", DBL_DIG);
printf("%.16lf\n", DBL_EPSILON);
```

Получаем:

```bash
15
0.0000000000000002
```

## Цикл for

**Пример 1.** Квадраты натуральных чисел.

```c
for (int i = 0; i < 10; ++i) {
    printf("%3d %6d\n", i, i * i);
}
```
