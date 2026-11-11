
/* ==== CDialogTemplate::GetSizeInDialogUnits @ 004acc7f ==== 
 * signature: void __thiscall GetSizeInDialogUnits(CDialogTemplate * this, tagSIZE * param_1)
 * body: 004acc7f-004accbe
 * note: Library Function - Single Match  public: void __thiscall CDialogTemplate::GetSizeInDialogUnits(struct tagSIZE *)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: void __thiscall CDialogTemplate::GetSizeInDialogUnits(struct tagSIZE *)const 
   
   Library: Visual Studio 1998 Release */

void __thiscall CDialogTemplate::GetSizeInDialogUnits(CDialogTemplate *this,tagSIZE *param_1)

{
  short sVar1;
  LPVOID pvVar2;
  
  pvVar2 = GlobalLock(*(HGLOBAL *)this);
  if (*(short *)((int)pvVar2 + 2) == -1) {
    param_1->cx = (int)*(short *)((int)pvVar2 + 0x16);
    sVar1 = *(short *)((int)pvVar2 + 0x18);
  }
  else {
    param_1->cx = (int)*(short *)((int)pvVar2 + 0xe);
    sVar1 = *(short *)((int)pvVar2 + 0x10);
  }
  param_1->cy = (int)sVar1;
  GlobalUnlock(*(HGLOBAL *)this);
  return;
}


