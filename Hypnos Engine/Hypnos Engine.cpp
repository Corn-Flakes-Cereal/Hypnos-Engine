// Hypnos Engine.cpp : Defines the entry point for the application.
//

#include "Hypnos Engine.h"

using namespace std;

int main()
{
	if (!glfwInit()) {
		cout << "glfwInit failed" << endl;
		return -1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

	
	GLFWwindow* window = glfwCreateWindow(1280, 720, "Hypnos Engine", nullptr, nullptr);

	if (window == nullptr) {
		cout << "glfwCreateWindow failed" << endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	glewExperimental = GL_TRUE;

	if (glewInit() != GLEW_OK) {
		cout << "glewInit failed" << endl;
		glfwDestroyWindow(window);
		glfwTerminate();
		return -1;
	}

	glClearColor(0.3f, 0.2f, 0.4f, 1.0f);
	
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}

	return 0;
}
