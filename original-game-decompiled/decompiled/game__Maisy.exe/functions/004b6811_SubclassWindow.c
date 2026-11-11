
/* ==== CWnd::SubclassWindow @ 004b6811 ==== 
 * signature: int __thiscall SubclassWindow(CWnd * this, HWND__ * param_1)
 * body: 004b6811-004b6859
 * note: Library Function - Single Match  public: int __thiscall CWnd::SubclassWindow(struct HWND__ *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CWnd::SubclassWindow(struct HWND__ *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CWnd::SubclassWindow(CWnd *this,HWND__ *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *dwNewLong;
  LONG LVar3;
  
  iVar1 = Attach(this,param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x54))();
    piVar2 = (int *)(**(code **)(iVar1 + 0x84))();
    dwNewLong = FUN_004a8a48();
    LVar3 = SetWindowLongA(param_1,-4,(LONG)dwNewLong);
    if (*piVar2 == 0) {
      *piVar2 = LVar3;
    }
    iVar1 = 1;
  }
  return iVar1;
}


