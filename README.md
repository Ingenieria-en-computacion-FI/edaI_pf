# Mini OS Project

Proyecto integrador de:

- estructuras de datos,
- algoritmos,
- complejidad,
- benchmarking,
- integración C/Python.

## Compilación

```bash
make
```

## Ejecutar

```bash
./bin/main
```

## Ejecutar pruebas

```bash
make test
```


## Ejecutar benchmarking
```bash
python3 scripts/benchmarking.py
```

# Makefile Inicial
```makefile
CC=gcc
CFLAGS=-Wall -Wextra -std=c11 -Iinclude

SRC=$(wildcard src/**/*.c src/*.c)
TESTS=$(wildcard tests/*.c)

all:
	$(CC) $(CFLAGS) $(SRC) -o bin/main

run:
	./bin/main

test:
	$(CC) $(CFLAGS) $(TESTS) $(SRC) -o bin/tests
	./bin/tests

clean:
	rm -f bin/*

```

## Requerimientos
 matplotlib
 numpy
 pandas
