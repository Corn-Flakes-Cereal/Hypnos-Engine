// Hypnos Engine.cpp : Defines the entry point for the application.
//

#include "Hypnos Engine.h"

using namespace std;

int main()
{
	if (!glfwInit ()) {
		cout << "glfwInit failed" << endl;
		return -1;
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	
	return 0;
}
