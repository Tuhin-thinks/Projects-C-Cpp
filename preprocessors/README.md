## General Notes

- There are 4 main types of preprocessor directives
    - Macros
    - File Inclusion
    - Conditiona compilation
    - Other directives

<hr>

-> **Macros:** Macros have specific names, when the compiler encounters the certain names, they are replaced by certain codes already defined using `#define`

-> **File inclusion:** This type of directives is used to include files in a program, 2 types of files can be included, 

1. header files
    ```cpp
    #include <file_name>
    ```
2. user defined files
    ```cpp
    #include "file name"
    ```

-> **Conditional Compilation:** This type of directives can be used to compile or skip compilation of certain parts of a program, based on some defined conditions.
```cpp
#ifdef macro_name
    statement 1;
    statement 2;
    statement 3;
    statement 4;
#endif
```

-> **Other directive:** 
1. **The `#undef` directive** is used to undefine an existing macro.
```cpp
#undef macro_name
```
2. **The `#pragma` directive:** These are compiler specific directives and can be used to turn on or off some features.
    - *`#pragma startup`* or *`#pragma exit`*: These directives help us to specify the functions that are needed to run before program startup (before the control passes to the `main()`)
    - `#pragma warn` directive: This directive is used to hide warning messages that are displayed during the execution of the program.
        - `#pragma warn -rvl` this directive hides those warnings which are raised when a funcion which is supposed to return a values does not returns anything.
        - `#pragma warn -par`: This hides the warnings when passed parameters are ununsed.
        - `#pragma warn -rch`: This hides those warnings, when the code is unreachable.