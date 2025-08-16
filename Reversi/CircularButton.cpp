#include "pch.h"
#include "CircularButton.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;

Reversi::CircularButton::CircularButton()
{
	this->FlatStyle = ::FlatStyle::Flat;
	this->FlatAppearance->BorderSize = 0;
	this->Dock = DockStyle::Fill;
	this->BackColor = Color::DarkGreen;
	this->ForeColor = Color::Black;
}

System::Void Reversi::CircularButton::OnPaint(System::Windows::Forms::PaintEventArgs^ e)
{
	Button::OnPaint(e);

	Graphics^ g = e->Graphics;
	g->SmoothingMode = SmoothingMode::AntiAlias;

	Rectangle rect = Rectangle(0, 0, this->Width - 1, this->Height - 1);
	
	GraphicsPath^ path = gcnew GraphicsPath;

	path->AddEllipse(rect);
		
	SolidBrush^ brush = gcnew SolidBrush(Color::White);
	g->FillPath(brush, path);

	Pen^ pen = gcnew Pen(this->ForeColor, 2);
	g->DrawPath(pen, path);

}