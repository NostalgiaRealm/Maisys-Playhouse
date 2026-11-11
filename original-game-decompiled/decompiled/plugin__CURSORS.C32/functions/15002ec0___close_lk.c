
/* ==== __close_lk @ 15002ec0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 15002ec0-15002f48
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
    iVar1 = FUN_150030d0(2);
    iVar2 = FUN_150030d0(1);
    if (iVar1 != iVar2) goto LAB_15002eea;
  }
  else {
LAB_15002eea:
    hObject = (HANDLE)FUN_150030d0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_15002f0a;
    }
  }
  DVar4 = 0;
LAB_15002f0a:
  FUN_15003030(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_15006a50 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}


