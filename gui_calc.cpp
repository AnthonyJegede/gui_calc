//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "gui_calc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

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
		TButton* b = ((TButton*)Sender);

		num1 = (Display->Text.ToDouble());
		ops = b->Caption;
		Display->Text = "";

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::ceeClick(TObject *Sender)
{
	   Display->Text = "0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ceClick(TObject *Sender)
{
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
	Double pm = (Display->Text.ToDouble());
    Display->Text = (-1 * pm);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::backClick(TObject *Sender)
{
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

	if (! Display->Text.Pos("."))
	{
		Display->Text = Display->Text + ".";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::equalsBtn1Click(TObject *Sender)
{
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
