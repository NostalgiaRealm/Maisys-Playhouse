
/* ==== FUN_11020b90 @ 11020b90 ==== 
 * signature: undefined4 __cdecl FUN_11020b90(int param_1, int param_2, int param_3, undefined * param_4)
 * body: 11020b90-11020c85
 */

undefined4 __cdecl FUN_11020b90(int param_1,int param_2,int param_3,undefined *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  HGLOBAL hMem;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  iVar10 = *(int *)(param_3 + 0x18);
  sVar1 = *(short *)(iVar10 + 0x1a);
  iVar3 = *(int *)(param_2 + 0x18);
  uVar11 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar10 + 0x24);
  sVar2 = *(short *)(iVar10 + 0x26);
  hMem = *(HGLOBAL *)(iVar10 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar6 = GlobalLock(hMem);
  uVar4 = *(undefined4 *)(param_2 + 4);
  iVar9 = (int)pvVar6 + (int)sVar1 * (iVar3 - sVar2) + ((int)uVar11 >> 3);
  iVar10 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar7 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar8 = FUN_1101f460(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar5 = *(int *)(param_1 + 0xc);
  if (0 < iVar10) {
    do {
      (*(code *)param_4)(iVar8,iVar7,uVar4,iVar9,uVar11 & 7,0);
      iVar7 = iVar7 + iVar3;
      iVar8 = iVar8 + iVar5;
      iVar9 = iVar9 + sVar1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  GlobalUnlock(hMem);
  return 1;
}


