
/* ==== CMDIChildWnd::PreTranslateMessage @ 004b6f97 ==== 
 * signature: int __thiscall PreTranslateMessage(CMDIChildWnd * this, tagMSG * param_1)
 * body: 004b6f97-004b700c
 * note: Library Function - Single Match  public: virtual int __thiscall CMDIChildWnd::PreTranslateMessage(struct tagMSG *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWnd::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 1998 Release */

int __thiscall CMDIChildWnd::PreTranslateMessage(CMDIChildWnd *this,tagMSG *param_1)

{
  int iVar1;
  HACCEL hAccTable;
  CMDIFrameWnd *pCVar2;
  
  if ((param_1->message == 0x201) || (param_1->message == 0xa1)) {
    FUN_004b2ebf(param_1->hwnd);
  }
  iVar1 = FUN_004a9389(this,param_1);
  if (iVar1 == 0) {
    if (((0xff < param_1->message) && (param_1->message < 0x109)) &&
       (hAccTable = (HACCEL)(**(code **)(*(int *)this + 0xec))(), hAccTable != (HACCEL)0x0)) {
      pCVar2 = GetMDIFrame(this);
      iVar1 = TranslateAcceleratorA(*(HWND *)(pCVar2 + 0x1c),hAccTable,param_1);
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


