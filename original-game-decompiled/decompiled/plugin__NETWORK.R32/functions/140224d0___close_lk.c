
/* ==== __close_lk @ 140224d0 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 140224d0-14022558
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
    iVar1 = FUN_14022830(2);
    iVar2 = FUN_14022830(1);
    if (iVar1 != iVar2) goto LAB_140224fa;
  }
  else {
LAB_140224fa:
    hObject = (HANDLE)FUN_14022830(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1402251a;
    }
  }
  DVar4 = 0;
LAB_1402251a:
  FUN_14022790(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_14029e70 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}


