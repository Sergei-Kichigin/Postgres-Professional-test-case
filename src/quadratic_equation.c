// quadratic_equation.c

#include "quadratic_equation.h"

#include <math.h>

/**
 * Решает квадратное уравнение вида ax^2 + bx + c = 0.
 *
 * @param a Коэффициент при x^2.
 * @param b Коэффициент при x.
 * @param c Свободный коэффициент.
 * @return Структура QuadraticSolution, содержащая количество корней и их
 * значения.
 */
QuadraticSolution solve_equation(double a, double b, double c) {
  QuadraticSolution solution;
  double discriminant = b * b - 4 * a * c;

  if (discriminant > 0) {
    solution.num_roots = 2;
    solution.root1 = (-b + sqrt(discriminant)) / (2 * a);
    solution.root2 = (-b - sqrt(discriminant)) / (2 * a);
  } else if (discriminant == 0) {
    solution.num_roots = 1;
    solution.root1 = -b / (2 * a);
    solution.root2 = solution.root1;
  } else {
    solution.num_roots = 0;
    // корней нет, их значения не определены
  }

  return solution;
}