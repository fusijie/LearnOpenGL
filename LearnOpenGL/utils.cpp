//
//  utils.cpp
//  LearnOpenGL
//
//  Created by 傅思杰 on 2020/4/2.
//  Copyright © 2020 傅思杰. All rights reserved.
//

#include "utils.hpp"

#include <iostream>

//check shader legal
void checkShader(int shader)
{
    int success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if(!success)
    {
        char buffer[512];
        glGetShaderInfoLog(shader, 512, NULL, buffer);
        std::string log = buffer;
        printf("%s", log.c_str());
    }
}

//check program legal
void checkProgram(int program)
{
    int success;
    glGetProgramiv(program, GL_LINK_STATUS, &success);
    if(!success)
    {
        char buffer[512];
        glGetProgramInfoLog(program, 512, nullptr, buffer);
        std::string log = buffer;
        printf("%s",log.c_str());
    }
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}
