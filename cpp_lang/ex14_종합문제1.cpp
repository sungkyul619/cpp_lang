#include<iostream>
using namespace std;

class GameWindow {
public:
	GameWindow() ;
	GameWindow(const int, const int);
	int getWidth ()const;
	int getHeight()const;
	void resizeWindow(const int, const int);

private:
	int width;
	int height;
};

GameWindow::GameWindow() :width(800), height(600) {}
GameWindow::GameWindow(const int width_, const int height_){
	resizeWindow(width_, height_);
}
int GameWindow::getWidth() const { return width; }
int GameWindow::getHeight() const { return height; }
void GameWindow::resizeWindow(const int width_,const int height_){
	width = width_;
	height = height_;
	if (width_ < 800) { width = 800; }
	if (height_ < 600) { height = 600; }
	
}


int main(){
	GameWindow mainWindow;
	cout << mainWindow.getWidth() <<"x"<< mainWindow.getHeight() << endl;
	mainWindow.resizeWindow(1366, 768);
	cout << mainWindow.getWidth() <<"x"<< mainWindow.getHeight() << endl;
	
}