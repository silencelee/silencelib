set(base_src 
    current_thread.cpp
    )

add_library(silence_base ${base_src})
target_link_libraries(silence_base pthread rt)

if(SILENCE_BUILD_EXAMPLES)
  add_subdirectory(tests)
endif()