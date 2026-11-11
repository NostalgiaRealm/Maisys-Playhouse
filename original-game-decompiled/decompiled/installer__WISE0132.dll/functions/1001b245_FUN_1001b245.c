
/* ==== FUN_1001b245 @ 1001b245 ==== 
 * signature: undefined FUN_1001b245(void)
 * body: 1001b245-1001b24f
 */

undefined4 FUN_1001b245(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10025320 <= param_1) {
LAB_1001b2dc:
    pDVar3 = FUN_10018220();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1001b2dc;
  FUN_1001bc10(param_1);
  if ((*(byte *)((&DAT_10025220)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1001bbc0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1001b2cd;
    pDVar3 = FUN_10018230();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10018220();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1001b2cd:
  FUN_1001bc80(param_1);
  return uVar5;
}


