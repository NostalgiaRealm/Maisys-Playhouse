
/* ==== FUN_10010091 @ 10010091 ==== 
 * signature: undefined FUN_10010091(void)
 * body: 10010091-1001010f
 */

DWORD FUN_10010091(undefined4 param_1,uint param_2,LONG param_3,DWORD param_4)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint uVar3;
  
  hFile = (HANDLE)FUN_1000ffa0(param_2);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_3,(PLONG)0x0,param_4);
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
  *(byte *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) =
       *(byte *)((&DAT_10018400)[(int)param_2 >> 5] + 4 + (param_2 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}


