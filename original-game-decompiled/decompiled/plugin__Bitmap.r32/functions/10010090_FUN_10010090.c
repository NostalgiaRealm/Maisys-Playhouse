
/* ==== FUN_10010090 @ 10010090 ==== 
 * signature: DWORD __stdcall FUN_10010090(uint param_1, undefined4 param_2, LONG param_3, DWORD param_4)
 * body: 10010090-10010090
 */

DWORD FUN_10010090(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1000ffa0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000f540();
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
    FUN_1000f4c0(uVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}


