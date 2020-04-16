#version 330 core
out vec4 FragColor;

in vec2 TexCoords;

uniform sampler2D screenTexture;

// 反相
void main()
{
    vec3 col = vec3(1 - texture(screenTexture, TexCoords));
    FragColor = vec4(col, 1.0);
}
