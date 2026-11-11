
/* ==== CFrameWnd::PreTranslateMessage @ 004b7bd6 ==== 
 * signature: int __thiscall PreTranslateMessage(CFrameWnd * this, tagMSG * param_1)
 * body: 004b7bd6-004b7c5c
 * note: Library Function - Single Match  public: virtual int __thiscall CFrameWnd::PreTranslateMessage(struct tagMSG *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this,tagMSG *param_1)

{
  int iVar1;
  HACCEL hAccTable;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    FUN_004b2ebf(param_1->hwnd);
  }
  iVar1 = FUN_004a9389(this,param_1);
  if (iVar1 == 0) {
    if ((*(int **)(this + 0x68) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(this + 0x68) + 0x58))(param_1), iVar1 != 0)) {
      return 1;
    }
    if ((((0xff < param_1->message) && (param_1->message < 0x109)) &&
        (hAccTable = (HACCEL)(**(code **)(*(int *)this + 0xec))(), hAccTable != (HACCEL)0x0)) &&
       (iVar1 = TranslateAcceleratorA(*(HWND *)(this + 0x1c),hAccTable,param_1), iVar1 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


