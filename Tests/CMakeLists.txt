set(TARGET tests)

file(GLOB_RECURSE SRC *.cpp)

include_directories(${YAWT_INCLUDE_DIR})

add_executable(${TARGET} ${SRC})

target_link_libraries(${TARGET} yawt)

install(TARGETS ${TARGET}
	RUNTIME DESTINATION ${PROJECT_BINARY_DIR}/bin)