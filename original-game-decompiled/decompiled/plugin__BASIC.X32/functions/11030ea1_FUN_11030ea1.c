
/* ==== FUN_11030ea1 @ 11030ea1 ==== 
 * signature: uint __fastcall FUN_11030ea1(int * param_1, int param_2)
 * body: 11030ea1-11030ea3
 */

/* WARNING: Instruction at (ram,0x11030f33) overlaps instruction at (ram,0x11030f31)
    */

uint __fastcall FUN_11030ea1(int *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  undefined3 uVar8;
  int iVar7;
  byte *pbVar9;
  uint *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar5 = *unaff_ESI;
  *(int *)((int)param_1 + 0xd4a1103) = *(int *)((int)param_1 + 0xd4a1103) + (int)param_1;
  iVar7 = *param_1;
  uVar1 = in((short)(param_2 + iVar7));
  *unaff_EDI = uVar1;
  iVar3 = (uVar5 | 0xfde1103) + 0xbaeefcf2;
  pbVar9 = (byte *)(param_2 + iVar7 + *param_1 + *param_1 + *param_1 + *param_1);
  *pbVar9 = *pbVar9 + (byte)param_1;
  uVar8 = (undefined3)((uint)param_1 >> 8);
  bVar6 = (byte)param_1 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 |
          *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9;
  *(int *)pbVar9 = *(int *)pbVar9 + CONCAT31(uVar8,bVar6);
  iVar7 = CONCAT31(uVar8,bVar6 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9) + *(int *)pbVar9;
  pbVar4 = (byte *)CONCAT31((int3)((uint)iVar3 >> 8),((byte)iVar3 | *pbVar9) + 10 | bRam060a0a0a);
  bVar6 = (byte)iVar7 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 |
          *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar9 | *pbVar4 | *pbVar9 | *pbVar9;
  bVar6 = bVar6 | *(byte *)CONCAT31((int3)((uint)iVar7 >> 8),bVar6);
  if ('\0' < (char)bVar6) {
    uRam0dc81103 = uRam0dc81103 >> 3 | uRam0dc81103 << 0x1d;
    pcVar2 = (code *)swi(3);
    bRam0d921103 = bVar6;
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  *(int *)((int)unaff_EDI + -0x3eeefcee) =
       (int)unaff_ESI + *(int *)((int)unaff_EDI + -0x3eeefcee) + 5;
  return (uint)pbVar4 | 0xdc81103;
}


