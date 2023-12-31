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
	TButton *equalsBtn1;
	void __fastcall NumEvent(TObject *Sender);
	void __fastcall OpsClick(TObject *Sender);
	void __fastcall equalsBtn(TObject *Sender);
	void __fastcall ceeClick(TObject *Sender);
	void __fastcall ceClick(TObject *Sender);
	void __fastcall plusminusClick(TObject *Sender);
	void __fastcall backClick(TObject *Sender);
	void __fastcall dotClick(TObject *Sender);
	void __fastcall equalsBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
