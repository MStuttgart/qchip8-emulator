#include <QApplication>

#include "emu_window.hpp"

////////////////////////////////////////////////////////////////////////////

int main ( int argc, char* argv[] )
{
	
	QApplication app ( argc, argv );
	
	EmuWindow emuWindow;
	
	emuWindow.show();

	return app.exec();
}

////////////////////////////////////////////////////////////////////////////