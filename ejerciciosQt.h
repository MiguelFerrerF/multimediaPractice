#pragma once

#include "config.h"
// Define the exercise
#if defined(EJERCICIO_1)
#include "ui_ejercicio1.h"
#elif defined(EJERCICIO_2)
#include "ui_ejercicio2.h"
#elif defined(EJERCICIO_3)
#include "ui_ejercicio3.h"
#elif defined(EJERCICIO_4)
#include "ui_ejercicio4.h"
#elif defined(EJERCICIO_5)
#include "ui_ejercicio5.h"
#elif defined(EJERCICIO_6)
#include "ui_ejercicio6.h"
#else
#include "ui_mainWindow.h"
#endif
// include OpenCV
#include <opencv2/opencv.hpp>

class ejerciciosQt: public QMainWindow
{
	Q_OBJECT
public:
    ejerciciosQt(QWidget *parent = nullptr);
	~ejerciciosQt();

private slots:
// Create the slots 
#if defined(EJERCICIO_1)
	void onPressMeButtonClicked();
	void onEraseButtonClicked();
#endif

private:
// Create a UI object
#if defined(EJERCICIO_1)
	Ui::Ejercicio1 ui;
#elif defined(EJERCICIO_2)
	Ui::Ejercicio2 ui;
#elif defined(EJERCICIO_3)
	Ui::Ejercicio3 ui;
#elif defined(EJERCICIO_4)
	Ui::Ejercicio4 ui;
#elif defined(EJERCICIO_5)
	Ui::Ejercicio5 ui;
#elif defined(EJERCICIO_6)
	Ui::Ejercicio6 ui;
#else
	Ui::MainWindow ui;
#endif

	void connectSignals();
};
