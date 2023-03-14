set(EXE_SURCES
    "main.cpp")

add_executable(${EXECUTABLE_NAME} ${EXE_SURCES})
target_link_libraries(${EXECUTABLE_NAME}  PUBLIC ${LIBRARY_NAME})