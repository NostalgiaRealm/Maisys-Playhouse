
/* ==== __close_lk @ 130065a0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 130065a0-13006628
 * note: Library Function - Single Match  __close_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar1 = FUN_130067b0(2);
    iVar2 = FUN_130067b0(1);
    if (iVar1 != iVar2) goto LAB_130065ca;
  }
  else {
LAB_130065ca:
    hObject = (HANDLE)FUN_130067b0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_130065ea;
    }
  }
  DVar4 = 0;
LAB_130065ea:
  FUN_13006710(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_13009d50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}


