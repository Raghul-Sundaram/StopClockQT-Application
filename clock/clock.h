#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_clock.h"
#include <chrono>
#include <thread>
void timer(void * parm);
class clock_1 : public QMainWindow
{
	Q_OBJECT

public:
	bool wait = false;
	bool stop = false;
	int i = 0;
	clock_1(QWidget *parent = Q_NULLPTR);
	void SetText(int _i);
	public slots:
	void startButton();
	void stopButton();
	void pauseButton();
private:
	Ui::clockClass ui;
};
