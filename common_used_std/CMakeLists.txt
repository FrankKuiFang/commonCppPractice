


include_directories(${CMAKE_CURRENT_SOURCE_DIR})


list( APPEND APP_SRC ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp )

add_executable(fgCppStdApp   ${APP_SRC} )

#target_link_libraries(fgCppStdApp "${OpenMP_CXX_FLAGS}")

install(TARGETS fgCppStdApp
        DESTINATION bin
       )
       