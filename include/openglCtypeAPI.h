#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "glshader.h"
#include "camera.h"
#include <iostream>
struct Vertex_Type_Inf{
       float *data,*start;
       unsigned int *Edata ,*EStart;
       int v_size,E_size;
       unsigned int VertexAttri_size;
       unsigned int* index ,*index_size ,*index_start;
};

struct Vertex_Type{
    unsigned int VAO,VBO,EBO;
    Vertex_Type(){
        glGenVertexArrays(1,&VAO);
        glGenBuffers(1,&VBO);
        glGenBuffers(1,&EBO);
    };
    ~Vertex_Type(){
       glDeleteVertexArrays(1, &VAO);
       glDeleteVertexArrays(1, &VBO);
       glDeleteBuffers(1, &EBO);
    };
    void Init_Vertex(Vertex_Type_Inf p);
    void send_date2GPU();
};
