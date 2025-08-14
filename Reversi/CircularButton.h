#pragma once

namespace Reversi
{

	ref class CircularButton : public System::Windows::Forms::Button
	{
	public :
		CircularButton();
	protected:
		System::Void OnPaint(System::Windows::Forms::PaintEventArgs^ e) override;
	};

}

