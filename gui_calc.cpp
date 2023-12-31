//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "gui_calc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//Declare variables section
Double num1, num2, ans;
String ops;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NumEvent(TObject *Sender)
{
			//Number buttons handling. This happens when any of the number buttons is clicked.
		TButton* b = ((TButton*)Sender);
		if (Display->Text =="0")
		{
			Display->Text = b->Caption;
		}
		else
		{
			Display->Text = Display->Text + b->Caption;
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OpsClick(TObject *Sender)
{
		//Operators buttons handling. This happens when any of the operator buttons is clicked.

		TButton* b = ((TButton*)Sender);

		num1 = (Display->Text.ToDouble());
		ops = b->Caption;
		Display->Text = "";

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::ceeClick(TObject *Sender)
{
	   //Clears everythin9. Both the display and the values in the variables.
	   Display->Text = "0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ceClick(TObject *Sender)
{
	   //Clear the display
	   Display->Text = "";
       String n1, n2;
	   n1 = (num1);
	   n2 = (num2);
	   n1 = "";
	   n2 = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::plusminusClick(TObject *Sender)
{
	//Change the sign of any nunber shown on the display.
	Double pm = (Display->Text.ToDouble());
    Display->Text = (-1 * pm);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::backClick(TObject *Sender)
{
	//Reduce the number of digits on the didplay one at a time.
	int bs = Display->Text.Length();
	if (bs == 1)
	{
		Display->Text = "0";
	}
	else
	{
		String mb = Display->Text.Delete(bs, 1);
        Display->Text = mb;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dotClick(TObject *Sender)
{
	//Check for, and consider decimal positions.
	if (! Display->Text.Pos("."))
	{
		Display->Text = Display->Text + ".";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::equalsBtn1Click(TObject *Sender)
{
	//Generate answer based on operator selected.
	num2 = (Display->Text.ToDouble());
		if (ops == "+")
		{
			  ans = num1 + num2;
			  Display->Text = ans;
		}
		else if (ops =="-")
		{
			  ans = num1 - num2;
			  Display->Text = ans;
		}
		else if (ops =="*")
		{
			  ans = num1 * num2;
			  Display->Text = ans;
		}
		else if (ops =="/")
		{
              //Handle any division by zero exception for when zero is entered as a denominator.
			  if (num2 != 0) {
			  ans = num1 / num2;
			  Display->Text = ans;
			  }
		else
		{
			ShowMessage("Divide overflow, stopped!");
			Display->Text = "0";
            return;
        }
		}
}
//---------------------------------------------------------------------------
