set(LIBRARY_SOURCES
    "print_lib.cpp")

    
add_library(${LIBRARY_NAME} STATIC 
    ${LIBRARY_SOURCES})

    
add_subdirectory(include)