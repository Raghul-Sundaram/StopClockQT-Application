#include "clock.h"
#include<string>

clock_1::clock_1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.startbtn, &QPushButton::clicked, this, &clock_1::startButton);
	connect(ui.stopbtn, &QPushButton::clicked, this, &clock_1::stopButton);
	connect(ui.pausebtn, &QPushButton::clicked, this, &clock_1::pauseButton);
}

void timer(void * parm)
{
	clock_1 * cl = (clock_1*)parm;
	while (cl->stop)
	{
		if (cl->wait == false) {
			cl->SetText(cl->i);
			std::this_thread::sleep_for(std::chrono::seconds(1));
			cl->i++;
		}
		else {
			continue;
		}
	}
}

void clock_1::startButton()
{
	if (stop) {
		return;
	}
	stop = true;
	std::thread t1(timer, this);
	t1.detach();
		
	
}

void clock_1::SetText(int _i)
{
	QString s = QString::number(_i);
	ui.display->setText(s);
}

void clock_1::stopButton()
{
	stop = false;
	i = 0;
}

void clock_1::pauseButton()
{
	if (wait) {
		wait = false;
		QString s = "PAUSE";
		ui.pausebtn->setText(s);
	}
	else {
		wait = true;
		QString s = "RESUME";
		ui.pausebtn->setText(s);
	}
	
}

//void timer(void * parm)
//{
//	clock_1 * cl = (clock_1*)parm;
//	while (cl->stop) 
//	{
//		if (cl->wait==false) {
//			cl->SetText(cl->i);
//			std::this_thread::sleep_for(std::chrono::seconds(1));
//			cl->i++;
//		}
//		else {
//			continue;
//		}
//	}
//}
//