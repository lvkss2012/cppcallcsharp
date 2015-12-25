#include "testqt.h"
#include <qtimer.h>
#include <qdebug.h>
#include <QDir>
#include <QTemporaryFile>

#import "E:\\TestComc\\TestComc\\bin\\Debug\\TestComc.tlb" raw_interfaces_only

using namespace TestComc;

TestQt::TestQt(QWidget *parent) :QMainWindow(parent)
{
	// Initialize the COM interface
	HRESULT hr = CoInitialize(NULL);
	// Make a smart pointer to the IAddClass interface in DLL
	ICalculatorPtr pIAddClass(__uuidof(ManagedClass));
	// Add two numbers using the ADD API
	long result = 0;
	hr = pIAddClass->Add(10, 20, &result);
	// Release the COM interface
	CoUninitialize();


}

TestQt::~TestQt()
{

}


