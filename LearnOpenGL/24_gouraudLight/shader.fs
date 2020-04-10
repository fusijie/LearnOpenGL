#version 330 core
out vec4 FragColor;

in vec3 LightColor;

uniform vec3 objectColor;

void main()
{
    FragColor = vec4(LightColor * objectColor, 1.0);
}
