Factorial
Synopsis
#include <boost/math/special_functions/factorials.hpp>
namespace boost{ namespace math{

template <class T>
T factorial(unsigned i);

template <class T, class Policy>
T factorial(unsigned i, const Policy&);

template <class T>
constexpr T unchecked_factorial(unsigned i);

template <class T>
struct max_factorial;

}} // namespaces
Description
Important
The functions described below are templates where the template argument T CANNOT be deduced from the arguments passed to the function. Therefore if you write something like:

boost::math::factorial(2);

You will get a (perhaps perplexing) compiler error, ususally indicating that there is no such function to be found. Instead you need to specify the return type explicity and write:

boost::math::factorial<double>(2);

So that the return type is known.

Furthermore, the template argument must be a real-valued type such as float or double and not an integer type - that would overflow far too easily for quite small values of parameter i!

The source code static_assert and comment just after the will be:

BOOST_STATIC_ASSERT(!boost::is_integral<T>::value);
// factorial<unsigned int>(n) is not implemented
// because it would overflow integral type T for too small n
// to be useful. Use instead a floating-point type,
// and convert to an unsigned type if essential, for example:
// unsigned int nfac = static_cast<unsigned int>(factorial<double>(n));
// See factorial documentation for more detail.
template <class T>
T factorial(unsigned i);

template <class T, class Policy>
T factorial(unsigned i, const Policy&);
Returns i!.

The final Policy argument is optional and can be used to control the behaviour of the function: how it handles errors, what level of precision to use etc. Refer to the policy documentation for more details.

For i <= max_factorial<T>::value this is implemented by table lookup, for larger values of i, this function is implemented in terms of tgamma.

If i is so large that the result can not be represented in type T, then calls overflow_error.

template <class T>
constexpr T unchecked_factorial(unsigned i);
Returns i!.

Internally this function performs table lookup of the result. Further it performs no range checking on the value of i: it is up to the caller to ensure that i <= max_factorial<T>::value. This function is intended to be used inside inner loops that require fast table lookup of factorials, but requires care to ensure that argument i never grows too large.

template <class T>
struct max_factorial
{
   static const unsigned value = X;
};
This traits class defines the largest value that can be passed to unchecked_factorial. The member value can be used where integral constant expressions are required: for example to define the size of further tables that depend on the factorials.

This function is constexpr only if the compiler supports C++14 constexpr functions.

Accuracy
For arguments smaller than max_factorial<T>::value the result should be correctly rounded. For larger arguments the accuracy will be the same as for tgamma.

Testing
Basic sanity checks and spot values to verify the data tables: the main tests for the tgamma function handle those cases already.

Implementation
The factorial function is table driven for small arguments, and is implemented in terms of tgamma for larger arguments.
