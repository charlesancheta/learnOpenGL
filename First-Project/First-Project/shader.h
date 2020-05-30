#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

int createShaderProgram(const char* vertexShaderSource, const char* fragmentShaderSource);
class Shader {
public:
	Shader() { ID = 0; };
	void compile(const char* vertexPath, const char* fragmentPath);
	void use();
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;
private:
	unsigned int ID;
};

#endif // !SHADER_H
