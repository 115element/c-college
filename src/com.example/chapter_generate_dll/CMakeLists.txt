
###如何生成DLL，注意：以下三种生成文件方式，不能同时开启，每次只能开启一个。

#①生成可执行文件.exe文件
#add_executable(chapter_generate_dll GenerateDll.c)

#②生成静态库.lib文件
#add_library(GenerateDll STATIC GenerateDll.c)

#③生成动态库.dll文件
add_library(GenerateDll SHARED GenerateDll.c)



# add_executable(demo demo.cpp) # 生成可执行文件
# add_library(common STATIC util.cpp) # 生成静态库
# add_library(common SHARED util.cpp) # 生成动态库或共享库
# add_library 默认生成是静态库，通过以上命令生成文件名字，
#    在 Linux 下是：
#        demo
#        libcommon.a
#        libcommon.so
#    在 Windows 下是：
#        demo.exe
#        common.lib
#        common.dll