#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);  // Qt app starts here

    QWidget window;  // Create a simple window
    window.resize(250, 500);  // Set window size
    window.setWindowTitle("Live Screenshot Window");
    window.show();  // Show the window

    return app.exec();  // Enter the Qt event loop
}
