//  Boost compiler configuration selection header file  ------------------------------//

//  (C) Copyright Boost.org 2001. Permission to copy, use, modify, sell and
//  distribute this software is granted provided this copyright notice appears
//  in all copies. This software is provided "as is" without express or implied
//  warranty, and with no claim as to its suitability for any purpose.

//  See http://www.boost.org for most recent version.

// locate which std lib we are using and define BOOST_STDLIB_CONFIG as needed:

// we need to include a std lib header here in order to detect which
// library is in use, use <utility> as it's about the smallest
// of the std lib headers - do not rely on this header being included -
// users can short-circuit this header if they know whose std lib they are using.

#include <utility>

#if defined(__SGI_STL_PORT)
   // STLPort library, this _must_ come first:
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/stlport.hpp>
#elif defined(__STD_RWCOMPILER_H__) || defined(_RWSTD_VER)
   // Rogue Wave library:
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/roguewave.hpp>
#elif (defined(_YVALS) && !defined(__IBMCPP__)) || defined(_CPPLIB_VER)
   // Dinkumware Library:
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/dinkumware.hpp>
#elif defined(__GLIBCPP__)
   // GNU libstdc++ 3
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/libstdcpp3.hpp>
#elif defined(__STL_CONFIG_H)
   // generic SGI STL
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/sgi.hpp>
#elif defined(__MSL_CPP__)
   // MSL standard lib:
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/msl.hpp>
#  elif defined(__IBMCPP__)
   // take the default VACPP std lib
#  define BOOST_STDLIB_CONFIG <boost/config/stdlib/vacpp.hpp>
#endif


