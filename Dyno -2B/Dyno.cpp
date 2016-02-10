// Dyno.cpp : main project file.

#include "stdafx.h"
#include "Form2.h"
#include <time.h>

//char com[10] = "com3";
//char baud[10] = "9600";

using namespace Dyno;


[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	
	
	Application::Run(gcnew Form2());
	//Connection();
	return 0;
}


// Function
//int Connection()
//{
//	Form1^ f1 = gcnew Form1();
//				 f1-> Show();
//				 return 0;
//
//}

