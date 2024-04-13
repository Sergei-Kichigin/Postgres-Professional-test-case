// quadratic_equation.h

#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

/**
 * Структура, представляющая решение квадратного уравнения.
 */
typedef struct {
  int num_roots;
  double root1;
  double root2;
} QuadraticSolution;

/**
 * Решает квадратное уравнение вида ax^2 + bx + c = 0.
 *
 * @param a Коэффициент при x^2.
 * @param b Коэффициент при x.
 * @param c Свободный коэффициент.
 * @return Структура QuadraticSolution, содержащая количество корней и их
 * значения.
 */
QuadraticSolution solve_equation(double a, double b, double c);

#endif