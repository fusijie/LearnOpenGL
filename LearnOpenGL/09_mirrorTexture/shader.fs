#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 texCoord;

uniform sampler2D texture1;

void main()
{
    if (texCoord.y < 0.5)
        FragColor = texture(texture1, texCoord);
    else
        FragColor = texture(texture1, vec2(texCoord.x, 1 - texCoord.y));
}
