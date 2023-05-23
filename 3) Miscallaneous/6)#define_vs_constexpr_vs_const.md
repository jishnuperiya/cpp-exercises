# #define and constexpr
Both # define and constexpr are used in C++ for defining constants, but they have some key differences in terms of usage and behavior.


 #define is a preprocessor directive that performs textual substitution. It is used to define macros, which are essentially symbolic names that get replaced with their corresponding values during the preprocessing stage of compilation.

On the other hand, constexpr is a keyword introduced in C++11 that is used to declare variables or functions whose values can be computed at compile-time

## The main differences between #define and constexpr are:

Textual substitution vs. compile-time evaluation: #define performs textual substitution during the preprocessing stage, whereas constexpr allows compile-time evaluation of expressions.

Type safety: constexpr variables have a specific type, whereas #define macros are purely textual substitutions, so they don't have explicit types. This can lead to potential type-related issues with #define.

Debugging and error messages: constexpr variables are part of the C++ language, which means they are subject to the usual language rules and provide better error messages and debugging support compared to #define macros.

Overall, constexpr is preferred for defining compile-time constants in modern C++ as it offers stronger type safety, better error messages, and improved performance due to compile-time evaluation. #define macros are still useful in certain scenarios, such as conditional compilation and text manipulation, but they should be used with caution and sparingly in favor of constexpr whenever possible.

# const vs constexpr
The const and constexpr keywords in C++ are both used to declare constants, but they have some key differences in terms of their usage, evaluation, and compile-time behavior.

## differences
### Evaluation time: 

The most significant difference between const and constexpr is when their values are evaluated.

const variables are evaluated at runtime. They are initialized with a value that cannot be changed throughout the program's execution. The value is determined during runtime, and the initialization may involve runtime computations or function calls.

constexpr variables and functions are evaluated at compile-time. They are initialized with values that can be computed by the compiler during the compilation stage. The values must be based on constant expressions that can be evaluated at compile-time. constexpr allows the compiler to perform optimizations and use the computed value directly during compilation.

### Requirements and constraints:

const can be used to declare variables or member variables as constants. It allows the use of any type that is copyable and constructible. The value assigned to a const variable can be determined at runtime, making it suitable for runtime constants or values that may change from one execution to another.

constexpr is primarily used to declare compile-time constants or functions that can be evaluated at compile-time. constexpr variables must be initialized with constant expressions that can be evaluated by the compiler. constexpr functions must have inputs and expressions that can be evaluated at compile-time.

### Compile-time evaluation:

const variables do not guarantee compile-time evaluation. While some compilers may optimize const variables by substituting their values during compilation, the standard does not require compile-time evaluation for const variables.

constexpr variables and functions are explicitly designed for compile-time evaluation. The expressions used to initialize constexpr variables and the bodies of constexpr functions are evaluated at compile-time, and the results are stored as compile-time constants.

### Type flexibility and restrictions:

const allows for a wider range of types, including user-defined types, as long as they are copyable and constructible. The type of a const variable can be determined at runtime.

constexpr has more restrictions on the types that can be used. constexpr variables must have literal types, which include fundamental types, pointers, references, and some user-defined types. The type of a constexpr variable is determined at compile-time.

Overall, const is suitable for runtime constants or variables that should not be modified, while constexpr is used for compile-time constants or functions that are evaluated at compile-time. constexpr provides the advantages of compile-time evaluation, stronger type checking, and potential performance optimizations.


