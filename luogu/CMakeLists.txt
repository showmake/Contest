cmake_minimum_required(VERSION 3.19)
project(luogu)

set(CMAKE_CXX_STANDARD 14)

# 如果你只需要根目录下的 test 文件夹的所有 .cpp 文件
file (GLOB files test/*.cpp)
# 如果你只有两层目录的话
file (GLOB files *.cpp */*.cpp)
# 同理，三层的话
file (GLOB files *.cpp */*.cpp */*/*.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)/(.+)\\..*" "\\1-\\2" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()