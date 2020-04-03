#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 texCoord;

uniform sampler2D texture1;
uniform sampler2D texture2;

uniform float time;

void main()
{
    float factor = (sin(time * 3.0) + 1.0) / 2.0;
    FragColor = mix(texture(texture1, texCoord), texture(texture2, texCoord), factor);
}
