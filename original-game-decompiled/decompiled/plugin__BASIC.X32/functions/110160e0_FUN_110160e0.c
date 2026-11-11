
/* ==== FUN_110160e0 @ 110160e0 ==== 
 * signature: undefined __cdecl FUN_110160e0(undefined4 param_1, HDC param_2, short param_3, int param_4)
 * body: 110160e0-110161d7
 */

void __cdecl FUN_110160e0(undefined4 param_1,HDC param_2,short param_3,int param_4)

{
  short sVar1;
  short sVar2;
  UINT UVar3;
  undefined4 uVar4;
  int iVar5;
  BYTE *pBVar6;
  byte local_404;
  undefined1 local_403;
  undefined1 local_402;
  RGBQUAD local_400 [256];
  
  sVar1 = (short)((param_3 * 0xff) / 100);
  UVar3 = GetDIBColorTable(param_2,0,0x100,local_400);
  if (UVar3 != 0) {
    pBVar6 = &local_400[0].rgbRed;
    iVar5 = 0;
    do {
      sVar2 = (ushort)*pBVar6 + sVar1;
      if (0xfe < sVar2) {
        sVar2 = 0xff;
      }
      if (sVar2 < 1) {
        sVar2 = 0;
      }
      local_402 = (undefined1)sVar2;
      sVar2 = (ushort)pBVar6[-1] + sVar1;
      if (0xfe < sVar2) {
        sVar2 = 0xff;
      }
      if (sVar2 < 1) {
        sVar2 = 0;
      }
      local_403 = (undefined1)sVar2;
      sVar2 = (ushort)((RGBQUAD *)(pBVar6 + -2))->rgbBlue + sVar1;
      if (0xfe < sVar2) {
        sVar2 = 0xff;
      }
      if (sVar2 < 1) {
        sVar2 = 0;
      }
      pBVar6 = pBVar6 + 4;
      local_404 = (byte)sVar2;
      uVar4 = FUN_110161e0((int)local_400,&local_404);
      *(char *)(iVar5 + param_4) = (char)uVar4;
      iVar5 = iVar5 + 1;
    } while (pBVar6 < &stack0x00000002);
    return;
  }
  iVar5 = 0;
  do {
    *(char *)(iVar5 + param_4) = (char)iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x100);
  return;
}


