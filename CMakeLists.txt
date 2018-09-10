cmake_minimum_required(VERSION 3.10.2)
project(itmo_programming_tasks C)

set(CMAKE_C_STANDARD 99)

add_executable(task1 src/task1.c)
add_executable(task2 src/task2.c)
add_executable(task3 src/task3.c)
add_executable(task4 src/task4.c)
add_executable(task5 src/task5.c)
add_executable(task6 src/task6.c)
add_executable(task9 src/task9.c)

target_link_libraries(task2 -lm)