#version 330 core 
layout(location = 0) in vec3 position;
layout(location = 1) in vec3 color;
layout(location = 2) in vec2 texture_coord;
layout(location = 3) in float dim;

out vec2 texCoord;
out vec3 texColor;

uniform mat4 mvp;

void main() {
	gl_Position = mvp * vec4(position, 1.0f);
	texCoord = texture_coord;
	texColor = color;
}