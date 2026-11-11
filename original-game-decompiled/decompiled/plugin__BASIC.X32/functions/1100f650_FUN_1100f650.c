
/* ==== FUN_1100f650 @ 1100f650 ==== 
 * signature: HGDIOBJ __cdecl FUN_1100f650(undefined4 param_1, int param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5, int param_6)
 * body: 1100f650-1100f777
 */

HGDIOBJ __cdecl
FUN_1100f650(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,int param_6)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  HGDIOBJ h;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  RGBQUAD local_800 [256];
  RGBQUAD local_400 [256];
  
  pcVar2 = *(char **)(param_2 + 0x5c);
  iVar3 = *(int *)(param_2 + 0x34);
  uVar7 = *(uint *)(param_2 + 0x38);
  uVar5 = (int)uVar7 >> 0x1f;
  sVar4 = 0;
  do {
    iVar6 = (int)sVar4;
    sVar4 = sVar4 + 1;
    iVar1 = iVar6 * 4;
    local_800[iVar6].rgbRed = *(BYTE *)(iVar1 + param_6);
    local_800[iVar6].rgbGreen = *(BYTE *)(iVar1 + 1 + param_6);
    local_800[iVar6].rgbBlue = *(BYTE *)(iVar1 + 2 + param_6);
    local_800[iVar6].rgbReserved = '\0';
  } while (sVar4 < 0x100);
  sVar4 = FUN_1100f5b0((int)local_800);
  FUN_1100f780(pcVar2,(iVar3 + 3U & 0xfffffffc) * ((uVar7 ^ uVar5) - uVar5),-1,(char)sVar4);
  GetDIBColorTable((HDC)*param_3,0,0x100,local_800 + 0x100);
  h = SelectObject((HDC)*param_3,*(HGDIOBJ *)(param_2 + 0x58));
  SetDIBColorTable((HDC)*param_3,0,0x100,local_800);
  uVar7 = (int)*(uint *)(param_2 + 0x38) >> 0x1f;
  BitBlt((HDC)param_3[2],0,0,*(int *)(param_2 + 0x34),(*(uint *)(param_2 + 0x38) ^ uVar7) - uVar7,
         (HDC)*param_3,0,0,0xcc0020);
  SetDIBColorTable((HDC)*param_3,0,0x100,local_800 + 0x100);
  SelectObject((HDC)*param_3,h);
  DeleteObject(*(HGDIOBJ *)(param_2 + 0x58));
  *(undefined4 *)(param_2 + 0x58) = 0;
  return h;
}


