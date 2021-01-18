//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 Form1->Canvas->Brush->Color = clWhite;
	 Form1->Canvas->Ellipse(120,125, 200,205);
	 Form1->Canvas->Brush->Color = clWhite;
	 Form1->Canvas->Ellipse(100,200, 220,320);
	 Form1->Canvas->Brush->Color = clWhite;
	 Form1->Canvas->Ellipse(100,202, 120,222);
	 Form1->Canvas->Brush->Color = clWhite;
	 Form1->Canvas->Ellipse(200,202, 220,222);
	 Form1->Canvas->Brush->Color = clBlack;
	 Form1->Canvas->Ellipse(140,155, 150,165);
	 Form1->Canvas->Brush->Color = clBlack;
	 Form1->Canvas->Ellipse(170,155, 180,165);
	 Form1->Canvas->Brush->Color = clRed;
	 Form1->Canvas->Ellipse(154,165, 166,177);
	 Form1->Canvas->Brush->Color = clBlack;
	 Form1->Canvas->Rectangle(125, 119, 195, 129);
	 Form1->Canvas->Brush->Color = clBlack;
	 Form1->Canvas->Rectangle(135, 69, 185, 129);

}
//---------------------------------------------------------------------------
