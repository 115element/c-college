####CMakeLists.txt用于描述哪些目录下的文件需要被编译,CMakeList.txt 文件中，命令名字是不区分大小写的，而参数和变量是大小写相关的。

### 第一个行project不是强制性的，最好加上，这会引入两个变量：HELLO_BINARY_DIR, HELLO_SOURCE_DIR
### 同时也会定义两个等价的变量：PROJECT_BINARY_DIR, PROJECT_SOURCE_DIR
project(c_college)

### 指定 cmake 的最小版本
cmake_minimum_required(VERSION 3.16)

### set命令用来设置变量
set(CMAKE_CXX_STANDARD 14)

add_executable(c_college main.cpp include/a.h)


ADD_SUBDIRECTORY(src/com.example/chapter_generate_dll)
ADD_SUBDIRECTORY(src/com.example/chapter_generate_lib)
ADD_SUBDIRECTORY(src/com.example/chapter_use_dll)
ADD_SUBDIRECTORY(src/com.example/chapter_use_lib)


###  cmake:用add_subdirectory()添加外部项目文件夹
###  一般情况下，我们的项目各个子项目都在一个总的项目根目录下，但有的时候，我们需要使用外部的文件夹，怎么办呢？
###  add_subdirectory命令，可以将指定的文件夹加到build任务列表中。下面是将与当前项目平级的一个目录下的子目录用
ADD_SUBDIRECTORY(src/com.example/chapter1/continue_break)
ADD_SUBDIRECTORY(src/com.example/chapter1/struct)
ADD_SUBDIRECTORY(src/com.example/chapter1/struct_use)
ADD_SUBDIRECTORY(src/com.example/chapter1/tradition_array_flaw)
ADD_SUBDIRECTORY(src/com.example/chapter1/typedef)
ADD_SUBDIRECTORY(src/com.example/chapter1/ui_99)
ADD_SUBDIRECTORY(src/com.example/chapter1/what_is_a_variable_address)
ADD_SUBDIRECTORY(src/com.example/chapter1/virus_memory)
ADD_SUBDIRECTORY(src/com.example/chapter1/break_continue)
ADD_SUBDIRECTORY(src/com.example/chapter1/enum)

ADD_SUBDIRECTORY(src/com.example/chapter2/bubble_sort)
ADD_SUBDIRECTORY(src/com.example/chapter2/queue)
ADD_SUBDIRECTORY(src/com.example/chapter2/recombination_pointer)
ADD_SUBDIRECTORY(src/com.example/chapter2/recursion)
ADD_SUBDIRECTORY(src/com.example/chapter2/return_break)
ADD_SUBDIRECTORY(src/com.example/chapter2/review_function)
ADD_SUBDIRECTORY(src/com.example/chapter2/run_multi_source)
ADD_SUBDIRECTORY(src/com.example/chapter2/sand_clock)
ADD_SUBDIRECTORY(src/com.example/chapter2/scanf_demo)
ADD_SUBDIRECTORY(src/com.example/chapter2/sort_demo)

ADD_SUBDIRECTORY(src/com.example/chapter3/array_address)
ADD_SUBDIRECTORY(src/com.example/chapter3/pointer)
ADD_SUBDIRECTORY(src/com.example/chapter3/pointer_and_array)
ADD_SUBDIRECTORY(src/com.example/chapter3/pointer_demo)
ADD_SUBDIRECTORY(src/com.example/chapter3/pointer_transfer)
ADD_SUBDIRECTORY(src/com.example/chapter3/pointer_variable_calculator)
ADD_SUBDIRECTORY(src/com.example/chapter3/prime_number)
ADD_SUBDIRECTORY(src/com.example/chapter3/primitive_type_pointer)
ADD_SUBDIRECTORY(src/com.example/chapter3/printf_demo)
ADD_SUBDIRECTORY(src/com.example/chapter3/printlf_demo)

ADD_SUBDIRECTORY(src/com.example/chapter4/float)
ADD_SUBDIRECTORY(src/com.example/chapter4/float_point)
ADD_SUBDIRECTORY(src/com.example/chapter4/formal_parameters_and_arguments)
ADD_SUBDIRECTORY(src/com.example/chapter4/function_declaration)
ADD_SUBDIRECTORY(src/com.example/chapter4/function_demo)
ADD_SUBDIRECTORY(src/com.example/chapter4/graph)
ADD_SUBDIRECTORY(src/com.example/chapter4/how_to_design_rationally_function)
ADD_SUBDIRECTORY(src/com.example/chapter4/if_han_tower)
ADD_SUBDIRECTORY(src/com.example/chapter4/integrated_application)
ADD_SUBDIRECTORY(src/com.example/chapter4/linear_array)
ADD_SUBDIRECTORY(src/com.example/chapter4/linear_array_and_pointer)

ADD_SUBDIRECTORY(src/com.example/chapter5/constants_store)
ADD_SUBDIRECTORY(src/com.example/chapter5/count_down)
ADD_SUBDIRECTORY(src/com.example/chapter5/dynamic_memory_allocation)
ADD_SUBDIRECTORY(src/com.example/chapter5/dynamic_memory_allocation_demo)
ADD_SUBDIRECTORY(src/com.example/chapter5/dynamic_memory_cross_function)
ADD_SUBDIRECTORY(src/com.example/chapter5/equation)
ADD_SUBDIRECTORY(src/com.example/chapter5/float_and_double)

ADD_SUBDIRECTORY(src/com.example/chapter6/introduction)
ADD_SUBDIRECTORY(src/com.example/chapter6/variable)
ADD_SUBDIRECTORY(src/com.example/chapter6/integer_constants)
ADD_SUBDIRECTORY(src/com.example/chapter6/storage_class)
ADD_SUBDIRECTORY(src/com.example/chapter6/sign_of_operation)
ADD_SUBDIRECTORY(src/com.example/chapter6/print_pointer)
ADD_SUBDIRECTORY(src/com.example/chapter6/scanf_use)
ADD_SUBDIRECTORY(src/com.example/chapter6/function_use)
ADD_SUBDIRECTORY(src/com.example/chapter6/action_scope)
ADD_SUBDIRECTORY(src/com.example/chapter6/array_use)
ADD_SUBDIRECTORY(src/com.example/chapter6/enum_use)
ADD_SUBDIRECTORY(src/com.example/chapter6/pointer_use)
ADD_SUBDIRECTORY(src/com.example/chapter6/fun_pointer)
ADD_SUBDIRECTORY(src/com.example/chapter6/call_fun)



# 遍历项目根目录下所有的 .cpp文件 【缺点：这种方法要求所有cpp文件命名不重复，不能含有中文，不能含有‘/’等字符！因为它就是直接Copy你的源码文件名的。】
#file(GLOB_RECURSE files *.cpp)
#foreach(file ${files})
#    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
#    add_executable(${exe} ${file})
#    message(\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
#endforeach()