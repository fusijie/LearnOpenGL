//
//  main.cpp
//
//  Created by 傅思杰 on 2020/4/2.
//  Copyright © 2020 傅思杰. All rights reserved.
//

#include <iostream>

#include <glad/glad.h>
#include <glfw/glfw3.h>

#include "common/Utils.h"
#include "common/Shader.h"

int main()
{
    // init glfw and create window
    GLFWwindow* window = initGLFW("GeometryShader");
    if (!window)
    {
        return -1;
    }
    
    // build and compile our shader program
    // normal
    //Shader ourShader("shader.vs", "shader.gs","shader.fs");
    
    // line
    //Shader ourShader("shader.vs", "line.gs", "shader.fs");
    
    // house
    Shader ourShader("shader.vs", "house.gs", "shader.fs");
    
    // set up vertex data (and buffer(s)) and configure vertex attributes
    float points[] = {
        -0.5f,  0.5f, // 左上
         0.5f,  0.5f, // 右上
         0.5f, -0.5f, // 右下
        -0.5f, -0.5f  // 左下
    };

    unsigned int VAO, VBO;
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(points), points, GL_STATIC_DRAW);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 2 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    
    // reset state
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    
    // render loop
    while (!glfwWindowShouldClose(window))
    {
        // input
        processInput(window);
        
        // render
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        
        // draw our first triangle
        ourShader.use();
        // seeing as we only have a single VAO there's no need to bind it every time, but we'll do so to keep things a bit more organized
        glBindVertexArray(VAO);
        glDrawArrays(GL_POINTS, 0, 4);
        
        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    // optional: de-allocate all resources once they've outlived their purpose:
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    
    ourShader.clear();
    
    // glfw: terminate, clearing all previously allocated GLFW resources.
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
