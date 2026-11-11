
/* ==== __close_lk @ 004a1f80 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 004a1f80-004a2008
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
    iVar1 = FUN_004a1240(2);
    iVar2 = FUN_004a1240(1);
    if (iVar1 != iVar2) goto LAB_004a1faa;
  }
  else {
LAB_004a1faa:
    hObject = (HANDLE)FUN_004a1240(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004a1fca;
    }
  }
  DVar4 = 0;
LAB_004a1fca:
  FUN_004a11a0(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_004e6690 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}


