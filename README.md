# Postgres-Professional-test-case
Completing a test assignment for a C developer position at *Postgres Professional*.

## Project struct

- `quadratic_equation.c` - the source code of the module with the implementation of the `solve_equation` function.
- `test_quadratic_equation.c` - source code of unit tests for the `solve_equation' function.
- `Makefile` is a file for building and testing a project using the `make' utility.

## Building

To build the project, execute the following command:

`make`

## Running Tests

To run the unit tests, execute the following command:

`make check`

## Code Formatting

If you wish to apply standard code formatting to the code, run:

`make clang_all`

## Cleaning

To remove the generated object files and executable files, execute:

`make clean`