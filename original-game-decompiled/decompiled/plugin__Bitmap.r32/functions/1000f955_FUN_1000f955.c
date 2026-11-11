
/* ==== FUN_1000f955 @ 1000f955 ==== 
 * signature: undefined FUN_1000f955(void)
 * body: 1000f955-1000f95f
 */

undefined4 FUN_1000f955(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10018500 <= param_1) {
LAB_1000f9ec:
    pDVar3 = FUN_1000f540();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000f9ec;
  FUN_1000fff0(param_1);
  if ((*(byte *)((&DAT_10018400)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000ffa0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000f9dd;
    pDVar3 = FUN_1000f550();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000f540();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000f9dd:
  FUN_10010060(param_1);
  return uVar5;
}


