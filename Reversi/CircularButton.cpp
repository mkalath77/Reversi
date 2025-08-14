#include "pch.h"
#include "CircularButton.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;

Reversi::CircularButton::CircularButton()
{
	this->FlatStyle = ::FlatStyle::Flat;
	this->FlatAppearance->BorderSize = 0;
	this->Dock = DockStyle::Fill;
	this->BackColor = Color::Transparent;
	this->ForeColor = Color::Black;
}

System::Void Reversi::CircularButton::OnPaint(System::Windows::Forms::PaintEventArgs^ e)
{
	Button::OnPaint(e);
	Graphics^ g = e->Graphics;
	g->DrawEllipse(gcnew Pen(this->ForeColor), Rectangle(0, 0, this->Width - 1, this->Height - 1));
}