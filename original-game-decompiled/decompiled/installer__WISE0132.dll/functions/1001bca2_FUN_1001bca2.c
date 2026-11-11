
/* ==== FUN_1001bca2 @ 1001bca2 ==== 
 * signature: undefined FUN_1001bca2(void)
 * body: 1001bca2-1001bcaf
 */

DWORD FUN_1001bca2(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1001bbc0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    uVar3 = GetLastError();
  }
  else {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    FUN_100181a0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}


