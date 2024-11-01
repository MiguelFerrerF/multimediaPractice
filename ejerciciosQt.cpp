#include "ejerciciosQt.h"

ejerciciosQt::ejerciciosQt(QWidget *parent)
{
	// Set up the UI
    ui.setupUi(this);

	// Connect signals and slots
	connectSignals();
}

ejerciciosQt::~ejerciciosQt()
{}

void ejerciciosQt::connectSignals()
{	
	// Connect the button to the slot
#if defined(EJERCICIO_1)
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(onPressMeButtonClicked()));
	connect(ui.eraseButton, SIGNAL(clicked()), this, SLOT(onEraseButtonClicked()));
#endif
}

#ifdef EJERCICIO_1
void ejerciciosQt::onPressMeButtonClicked() {
	// print Hello World!! in the label
	ui.label->setText("Hello World!!");
}

void ejerciciosQt::onEraseButtonClicked() {
	// erase the label
	ui.label->setText("");
}
#endif


