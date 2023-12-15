//---------------------------------------------------------------------------

#ifndef gui_calcH
#define gui_calcH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Display;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *seven;
	TButton *eight;
	TButton *nine;
	TButton *times;
	TButton *back;
	TButton *cee;
	TButton *ce;
	TButton *divide;
	TButton *four;
	TButton *five;
	TButton *six;
	TButton *minus;
	TButton *one;
	TButton *two;
	TButton *three;
	TButton *plus;
	TButton *zero;
	TButton *plusminus;
	TButton *dot;
	TButton *equals;
	void __fastcall NumEvent(TObject *Sender);
	void __fastcall OpsClick(TObject *Sender);
	void __fastcall equalsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
