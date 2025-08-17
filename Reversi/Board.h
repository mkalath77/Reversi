#pragma once
		
#include "CircularButton.h"
#include <array>

namespace Reversi
{
	ref class Board : public System::Windows::Forms::TableLayoutPanel
	{
	public:
		Board();
		CircularButton^ GetSquare(int row, int column)
		{
			if (row < 0 || row >= RowCount || column < 0 || column >= ColumnCount)
				throw gcnew System::ArgumentOutOfRangeException("Row or Column index is out of range.");
			return dynamic_cast<CircularButton^>(this->GetControlFromPosition(column, row));
		}
	};
}

