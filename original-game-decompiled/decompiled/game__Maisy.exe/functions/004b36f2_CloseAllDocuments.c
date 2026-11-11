
/* ==== CDocTemplate::CloseAllDocuments @ 004b36f2 ==== 
 * signature: void __thiscall CloseAllDocuments(CDocTemplate * this, int param_1)
 * body: 004b36f2-004b373b
 * note: Library Function - Single Match  public: virtual void __thiscall CDocTemplate::CloseAllDocuments(int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void __thiscall CDocTemplate::CloseAllDocuments(int)
   
   Library: Visual Studio 1998 Release */

void __thiscall CDocTemplate::CloseAllDocuments(CDocTemplate *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  CDocument *this_00;
  int local_8;
  
  iVar1 = *(int *)this;
  local_8 = (**(code **)(iVar1 + 0x58))();
  if (local_8 != 0) {
    pcVar2 = *(code **)(iVar1 + 0x5c);
    do {
      this_00 = (CDocument *)(*pcVar2)(&local_8);
      if (param_1 != 0) {
        CDocument::DisconnectViews(this_00);
      }
      (**(code **)(*(int *)this_00 + 0x80))();
    } while (local_8 != 0);
  }
  return;
}


