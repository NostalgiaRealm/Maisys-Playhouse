
/* ==== FUN_004b83e6 @ 004b83e6 ==== 
 * signature: char * __thiscall FUN_004b83e6(void * this, undefined4 param_1, ushort param_2)
 * body: 004b83e6-004b846a
 */

char * __thiscall FUN_004b83e6(void *this,undefined4 param_1,ushort param_2)

{
  int iVar1;
  HICON pHVar2;
  BOOL BVar3;
  char *pcVar4;
  tagWNDCLASSA *lpWndClass;
  undefined1 local_5c [32];
  undefined4 local_3c;
  LPCSTR local_34;
  tagWNDCLASSA local_2c;
  
  iVar1 = FUN_004bafca();
  pHVar2 = LoadIconA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)(uint)param_2);
  if (pHVar2 != (HICON)0x0) {
    _memset(local_5c,0,0x30);
    local_3c = param_1;
    (**(code **)(*(int *)this + 0x60))(local_5c);
    if (local_34 != (LPCSTR)0x0) {
      lpWndClass = &local_2c;
      iVar1 = FUN_004bafca();
      BVar3 = GetClassInfoA(*(HINSTANCE *)(iVar1 + 8),local_34,lpWndClass);
      if ((BVar3 != 0) && (local_2c.hIcon != pHVar2)) {
        pcVar4 = AfxRegisterWndClass(local_2c.style,local_2c.hCursor,local_2c.hbrBackground,pHVar2);
        return pcVar4;
      }
    }
  }
  return (char *)0x0;
}


