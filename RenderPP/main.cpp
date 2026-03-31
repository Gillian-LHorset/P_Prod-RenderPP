#include <iostream>
#include <GLFW/glfw3.h>

int main() {
    // crash the app
    if (!glfwInit()) {
        std::cerr << "Échec de l'initialisation de GLFW" << std::endl;
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 800, "Render++", NULL, NULL);
    if (!window) {
        std::cerr << "Échec de la création de la fenêtre" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // main while of the window
    while (!glfwWindowShouldClose(window)) {

        glfwSwapBuffers(window);
        // manage key events
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}