
/* ==== FUN_1101da70 @ 1101da70 ==== 
 * signature: undefined __cdecl FUN_1101da70(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 1101da70-1101db7e
 */

void __cdecl FUN_1101da70(undefined4 param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  HBITMAP pHVar2;
  int iVar3;
  DWORD *pDVar4;
  BITMAPINFO *pBVar5;
  byte *pbVar6;
  short sVar7;
  byte local_488 [12];
  undefined4 local_47c;
  int local_474;
  RGBQUAD *local_460;
  int local_45c;
  BITMAPINFO local_434 [24];
  
  sVar7 = *(short *)(param_2 + 0x1c);
  if (((sVar7 == 0x406) || (sVar7 == 0x410)) || (sVar7 == 0x41a)) {
    if (*(HGDIOBJ *)(param_2 + 0x58) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)(param_2 + 0x58));
      *(undefined4 *)(param_2 + 0x58) = 0;
    }
    GetObjectA(*(HANDLE *)(param_3[1] + 0x42c),0x54,local_488);
    pDVar4 = (DWORD *)param_3[1];
    pBVar5 = local_434;
    for (iVar3 = 0x10d; iVar3 != 0; iVar3 = iVar3 + -1) {
      (pBVar5->bmiHeader).biSize = *pDVar4;
      pDVar4 = pDVar4 + 1;
      pBVar5 = (BITMAPINFO *)&(pBVar5->bmiHeader).biWidth;
    }
    pHVar2 = CreateDIBSection((HDC)*param_3,local_434,0,(void **)(param_2 + 0x5c),(HANDLE)0x0,0);
    *(HBITMAP *)(param_2 + 0x58) = pHVar2;
    if (pHVar2 != (HBITMAP)0x0) {
      pbVar6 = local_488;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        pbVar6[0] = 0;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6 = pbVar6 + 4;
      }
      local_47c = 0;
      local_460 = local_434[0].bmiColors;
      local_45c = param_3[1] + 0x28;
      pBVar5 = local_434;
      pDVar4 = (DWORD *)(param_2 + 0x30);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pDVar4 = (pBVar5->bmiHeader).biSize;
        pBVar5 = (BITMAPINFO *)&(pBVar5->bmiHeader).biWidth;
        pDVar4 = pDVar4 + 1;
      }
      uVar1 = (ushort)(local_434[0].bmiHeader.biHeight >> 0x1f);
      sVar7 = ((ushort)local_434[0].bmiHeader.biHeight ^ uVar1) - uVar1;
      FUN_1101ea40((int)local_434,*(int *)(param_2 + 0x5c),0,0,(short)local_434[0].bmiHeader.biWidth
                   ,sVar7,param_3[1],local_474,0,0,(short)local_434[0].bmiHeader.biWidth,sVar7,
                   local_488);
    }
  }
  return;
}


