
/* ==== __close_lk @ 12032c00 ==== 
 * signature: undefined4 __cdecl __close_lk(uint param_1)
 * body: 12032c00-12032c88
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
    iVar1 = FUN_12032f60(2);
    iVar2 = FUN_12032f60(1);
    if (iVar1 != iVar2) goto LAB_12032c2a;
  }
  else {
LAB_12032c2a:
    hObject = (HANDLE)FUN_12032f60(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_12032c4a;
    }
  }
  DVar4 = 0;
LAB_12032c4a:
  FUN_12032ec0(param_1);
  if (DVar4 != 0) {
    __dosmaperr(DVar4);
    return 0xffffffff;
  }
  *(undefined1 *)
   (*(int *)((int)&DAT_1203aaf0 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 + (param_1 & 0x1f) * 0x24)
       = 0;
  return 0;
}


