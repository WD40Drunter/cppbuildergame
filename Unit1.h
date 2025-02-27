//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTimer *Timer1;
        TButton *Button2;
        TLabel *Label1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);

private:
    TShape* player;
    void SprawdzKolizje();
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
class TPlayerShape : public TShape
{
protected:
    void __fastcall Paint(void);
public:
    __fastcall TPlayerShape(TComponent* Owner);
};
class TPocisk : public TShape
{
public:
    __fastcall TPocisk(TComponent* Owner);  // Konstruktor
    void Ruch();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
