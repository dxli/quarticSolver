#include<vector>

unsigned int quadraticSolver(double * ,  double *);
unsigned int cubicSolver(double * ,  double *);
unsigned int quarticSolver(double * ,  double *);

//polynomial solver for monic polynomials
// \Sum_{i=0}^n a[i] x^i = 0
// e.g.
// a[2] x^2 + a[1] x + a[0] =0
// a[3] x^3 + a[2] x^2 + a[1] x + a[0]=0
// a[4] x^4 + a[3] x^3 + a[2] x^2 + a[1] x + a[0]=0
// input: const std::vector<double>& coeffA, coefficients of a polynomial by the order described
// return: all real roots found
std::vector<double> eigenSolver(const std::vector<double>& coeffA);

//polynomial solver for monic polynomials, real roots only
// x^2 + ce[0] x + ce[1] =0
// x^3 + ce[0] x^2 + ce[1] x + ce[2]=0
// x^4 + ce[0] x^3 + ce[1] x^2 + ce[2] x + ce[3]=0
// etc.
// input: const std::vector<double>& coeffA, coefficients of a monic polynomial by the order described
// return: all real roots found
std::vector<double> eigenSolverMonic(const std::vector<double>& coefficients);
