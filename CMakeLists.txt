cmake_minimum_required(VERSION 3.10)

project(maze_generator)

set(SOURCES
  src/main.c
  src/vertex_edge.c
  src/graph.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} m)

target_include_directories(${PROJECT_NAME}
  PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)
