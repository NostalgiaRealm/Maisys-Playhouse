
/* ==== CDialogTemplate::CDialogTemplate @ 004ac776 ==== 
 * signature: undefined __thiscall CDialogTemplate(CDialogTemplate * this, DLGTEMPLATE * param_1)
 * body: 004ac776-004ac7a6
 * note: Library Function - Single Match  public: __thiscall CDialogTemplate::CDialogTemplate(struct DLGTEMPLATE const *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CDialogTemplate::CDialogTemplate(struct DLGTEMPLATE const *)
   
   Library: Visual Studio 1998 Release */

CDialogTemplate * __thiscall
CDialogTemplate::CDialogTemplate(CDialogTemplate *this,DLGTEMPLATE *param_1)

{
  uint uVar1;
  
  if (param_1 == (DLGTEMPLATE *)0x0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    uVar1 = GetTemplateSize(param_1);
    SetTemplate(this,param_1,uVar1);
  }
  return this;
}


