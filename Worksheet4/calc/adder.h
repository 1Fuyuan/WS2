// begin - adder.h

#ifndef MATHSLIB_ADDER_H
#define MATHSLIB_ADDER_H

// We need to prefix our function names with an additional keyword which is different
// depending on the operating system we are using, and whether we are using or creating the library.
// The variable maths_EXPORTS must be defined at build time if we are building the library, but not if we are using it.

#if defined(WIN32) || defined(_WIN32)
    #ifdef maths_STATIC
        // don't add any keywords if building a static library
        #define MATHSLIBAPI
    #else
        #ifdef maths_EXPORTS
            #define MATHSLIBAPI __declspec(dllexport)
        #else
            #define MATHSLIBAPI __declspec(dllimport)
        #endif
    #endif
#else
    // MATHSLIBAPI is defined as nothing if we are not on Windows
    #define MATHSLIBAPI
#endif

// prototype for the function including additional keyword
MATHSLIBAPI int add(int a, int b);

#endif

// end - adder.h
