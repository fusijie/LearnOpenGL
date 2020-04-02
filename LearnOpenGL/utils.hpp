//
//  utils.hpp
//  LearnOpenGL
//
//  Created by 傅思杰 on 2020/4/2.
//  Copyright © 2020 傅思杰. All rights reserved.
//

#ifndef utils_hpp
#define utils_hpp

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void checkShader(int shader);
void checkProgram(int program);
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

#endif /* utils_hpp */
