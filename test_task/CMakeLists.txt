# CMakeList.txt: проект CMake для test_task; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (test_task "test_task.cpp" "test_task.h" "figure.h" "figure.cpp" "circle.h" "circle.cpp" "ellipse.h" "ellipse.cpp" "helix.h" "helix.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET test_task PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
