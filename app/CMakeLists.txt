# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)



find_library( # Sets the name of the path variable.
              log-lib


              log )


              #设置so库路径
              set(my_lib_path ${CMAKE_SOURCE_DIR}/libs)
              #讲第三方库作为动态库引用
              add_library( native-lib
                           SHARED
                           IMPORTED )
              #指名第三方库的绝对路径
              set_target_properties( native-lib
                                     PROPERTIES IMPORTED_LOCATION
                                     ${my_lib_path}/${ANDROID_ABI}/libnative-lib.so )



add_library( # Sets the name of the library.
             MySOlib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.c )




target_link_libraries( # Specifies the target library.
                       MySOlib
                       native-lib
                       ${log-lib} )



