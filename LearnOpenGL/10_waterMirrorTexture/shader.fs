#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 texCoord;

uniform sampler2D texture1;
uniform float time;

void main()
{
    if (texCoord.y < 0.5)
        FragColor = texture(texture1, texCoord);
    else
        FragColor = texture(texture1, vec2(texCoord.x + sin(texCoord.y * 60.0 + time * 2.0) / 200.0, 1.0 - texCoord.y)) * vec4(0.7, 0.7, 1.0, 1.0);
}
