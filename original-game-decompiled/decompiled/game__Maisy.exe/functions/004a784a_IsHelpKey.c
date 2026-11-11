
/* ==== IsHelpKey @ 004a784a ==== 
 * signature: int __stdcall IsHelpKey(tagMSG * param_1)
 * body: 004a784a-004a7894
 * note: Library Function - Single Match  int __stdcall IsHelpKey(struct tagMSG *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __stdcall IsHelpKey(struct tagMSG *)
   
   Library: Visual Studio 1998 Release */

int IsHelpKey(tagMSG *param_1)

{
  SHORT SVar1;
  
  if ((((param_1->message == 0x100) && (param_1->wParam == 0x70)) &&
      (((uint)param_1->lParam >> 0x10 & 0x4000) == 0)) &&
     (((SVar1 = GetKeyState(0x10), -1 < SVar1 && (SVar1 = GetKeyState(0x11), -1 < SVar1)) &&
      (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    return 1;
  }
  return 0;
}


