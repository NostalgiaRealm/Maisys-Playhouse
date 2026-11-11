
/* ==== FUN_10006ec0 @ 10006ec0 ==== 
 * signature: undefined __cdecl FUN_10006ec0(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 10006ec0-1000703e
 */

void __cdecl
FUN_10006ec0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar6 = param_3;
  iVar8 = param_4 - param_3;
  iVar9 = iVar8;
  if (iVar8 < 0) {
    iVar9 = param_3 - param_4;
  }
  iVar2 = param_6 - param_5;
  iVar7 = iVar2;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar7 = param_5 - param_6;
    iVar1 = param_4;
  }
  param_4 = iVar1;
  local_4 = ((iVar8 < 1) - 1 & 2) - 1;
  local_18 = iVar7 * 2 - iVar9;
  local_c = ((iVar2 < 1) - 1 & 2) - 1;
  local_8 = iVar9 * 2;
  FUN_10006070(param_1,&param_6,&local_14);
  FUN_10006070(param_2,&param_1,&local_10);
  if (-1 < iVar9) {
    param_2 = iVar9 + 1;
    do {
      uVar3 = (uint)(*(ushort *)(param_6 + 0xe) >> 3);
      puVar4 = (undefined1 *)
               (iVar6 * uVar3 +
               local_14 + (*(int *)(param_6 + 4) * uVar3 + 3 & 0xfffffffc) * param_8);
      uVar3 = (uint)(*(ushort *)(param_1 + 0xe) >> 3);
      sVar10 = 0;
      puVar5 = (undefined1 *)
               (param_5 * uVar3 +
               local_10 + (*(int *)(param_1 + 4) * uVar3 + 3 & 0xfffffffc) * param_7);
      if (*(ushort *)(param_6 + 0xe) >> 3 != 0) {
        do {
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          sVar10 = sVar10 + 1;
        } while (sVar10 < (short)(*(ushort *)(param_6 + 0xe) >> 3));
      }
      if (-1 < local_18) {
        do {
          param_5 = param_5 + (short)local_c;
          local_18 = local_18 - local_8;
        } while (-1 < local_18);
      }
      iVar6 = param_3 + (short)local_4;
      local_18 = local_18 + iVar7 * 2;
      param_2 = param_2 + -1;
      param_3 = iVar6;
    } while (param_2 != 0);
  }
  return;
}


