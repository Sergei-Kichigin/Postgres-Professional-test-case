// test_quadratic_equation.c

#include <check.h>

#include "quadratic_equation.h"

// Тест когда есть два корня
START_TEST(test_two_roots) {
  QuadraticSolution solution = solve_equation(1, -3, 2);
  ck_assert_int_eq(solution.num_roots, 2);
  ck_assert_double_eq_tol(solution.root1, 2.0, 1e-6);
  ck_assert_double_eq_tol(solution.root2, 1.0, 1e-6);
}
END_TEST

// Тест когда один корень
START_TEST(test_one_root) {
  QuadraticSolution solution = solve_equation(1, -2, 1);
  ck_assert_int_eq(solution.num_roots, 1);
  ck_assert_double_eq_tol(solution.root1, 1.0, 1e-6);
  ck_assert_double_eq_tol(solution.root2, 1.0, 1e-6);
}
END_TEST

// Тест когда нет корней
START_TEST(test_no_roots) {
  QuadraticSolution solution = solve_equation(1, 1, 1);
  ck_assert_int_eq(solution.num_roots, 0);
}
END_TEST

int main(void) {
  Suite *s;
  TCase *tc_core;
  SRunner *sr;
  int number_failed;

  s = suite_create("QuadraticEquation");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_two_roots);
  tcase_add_test(tc_core, test_one_root);
  tcase_add_test(tc_core, test_no_roots);
  suite_add_tcase(s, tc_core);

  sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}