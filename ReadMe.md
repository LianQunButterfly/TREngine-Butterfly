### build 
本项目使用cmake 构建
在使用cmake 之后，将shaderFIle 中的文件和vendor文件夹中的lib文件夹放到build（cmake生成的构建目录）目录下。

#### 大致的目录文件树
`
|-- CMakeLists.txt
|
|
|-- src
|   | --*.cpp
|--include
|   |-- *.h
|--build
|   |--*  * .vs
|   |-- * .fs
|   |--lib
|       |--glfw3.lib
