
/* ==== __lseek_lk @ 11031e60 ==== 
 * signature: DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
 * body: 11031e60-11031ee1
 * note: Library Function - Single Match  __lseek_lk  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __lseek_lk
   
   Library: Visual Studio 1998 Release */

DWORD __cdecl __lseek_lk(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  int *piVar2;
  DWORD DVar3;
  ulong uVar4;
  
  hFile = (HANDLE)FUN_11031c30(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = FUN_1102e850();
    *piVar2 = 9;
    return 0xffffffff;
  }
  DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  uVar4 = 0;
  if (DVar3 == 0xffffffff) {
    uVar4 = GetLastError();
  }
  if (uVar4 != 0) {
    __dosmaperr(uVar4);
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*(int *)((int)&DAT_1103aa30 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                   (param_1 & 0x1f) * 0x24);
  *pbVar1 = *pbVar1 & 0xfd;
  return DVar3;
}


