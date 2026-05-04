#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(const int a, const int b) { //recibe dos enteros y devuelve su suma
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── la función multiplicar recibe dos números enteros como parámetros y devuelve el producto entre dichos números ─────────────────────── */

int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0; /* version main */
}
