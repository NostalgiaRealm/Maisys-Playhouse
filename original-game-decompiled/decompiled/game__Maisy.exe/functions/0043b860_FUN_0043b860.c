
/* ==== FUN_0043b860 @ 0043b860 ==== 
 * signature: undefined4 __cdecl FUN_0043b860(int param_1, int param_2, int param_3, undefined * param_4)
 * body: 0043b860-0043b94d
 */

undefined4 __cdecl FUN_0043b860(int param_1,int param_2,int param_3,undefined *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  undefined4 uVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  undefined2 extraout_var;
  uint uVar9;
  int iVar10;
  undefined4 local_8;
  
  iVar3 = *(int *)(param_3 + 0x18);
  sVar1 = *(short *)(iVar3 + 0x1a);
  sVar2 = *(short *)(iVar3 + 0x26);
  uVar9 = *(int *)(param_2 + 0x14) - (int)*(short *)(iVar3 + 0x24);
  iVar4 = *(int *)(param_2 + 0x18);
  hMem = *(HGLOBAL *)(iVar3 + 0x1c);
  if (hMem == (HGLOBAL)0x0) {
    return 0xffffffff;
  }
  pvVar6 = GlobalLock(hMem);
  uVar5 = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar10 = (int)pvVar6 + (int)sVar1 * (iVar4 - sVar2) + ((int)uVar9 >> 3);
  local_8 = *(int *)(param_2 + 8);
  iVar7 = FUN_0043a270(CONCAT22((short)((uint)local_8 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar8 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_1 + 0xc);
  if (0 < local_8) {
    do {
      (*(code *)param_4)(iVar8,iVar7,uVar5,iVar10,uVar9 & 7,0);
      iVar7 = iVar7 + iVar3;
      iVar8 = iVar8 + iVar4;
      iVar10 = iVar10 + sVar1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  GlobalUnlock(hMem);
  return 1;
}


