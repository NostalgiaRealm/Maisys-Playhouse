
/* ==== FUN_10006ea5 @ 10006ea5 ==== 
 * signature: undefined __stdcall FUN_10006ea5(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8)
 * body: 10006ea5-10006ebf
 */

void FUN_10006ea5(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

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
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
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
  iStack_4 = ((iVar8 < 1) - 1 & 2) - 1;
  iStack_18 = iVar7 * 2 - iVar9;
  iStack_c = ((iVar2 < 1) - 1 & 2) - 1;
  iStack_8 = iVar9 * 2;
  FUN_10006070(param_1,&param_6,&iStack_14);
  FUN_10006070(param_2,&param_1,&iStack_10);
  if (-1 < iVar9) {
    param_2 = iVar9 + 1;
    do {
      uVar3 = (uint)(*(ushort *)(param_6 + 0xe) >> 3);
      puVar4 = (undefined1 *)
               (iVar6 * uVar3 +
               iStack_14 + (*(int *)(param_6 + 4) * uVar3 + 3 & 0xfffffffc) * param_8);
      uVar3 = (uint)(*(ushort *)(param_1 + 0xe) >> 3);
      sVar10 = 0;
      puVar5 = (undefined1 *)
               (param_5 * uVar3 +
               iStack_10 + (*(int *)(param_1 + 4) * uVar3 + 3 & 0xfffffffc) * param_7);
      if (*(ushort *)(param_6 + 0xe) >> 3 != 0) {
        do {
          *puVar4 = *puVar5;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          sVar10 = sVar10 + 1;
        } while (sVar10 < (short)(*(ushort *)(param_6 + 0xe) >> 3));
      }
      if (-1 < iStack_18) {
        do {
          param_5 = param_5 + (short)iStack_c;
          iStack_18 = iStack_18 - iStack_8;
        } while (-1 < iStack_18);
      }
      iVar6 = param_3 + (short)iStack_4;
      iStack_18 = iStack_18 + iVar7 * 2;
      param_2 = param_2 + -1;
      param_3 = iVar6;
    } while (param_2 != 0);
  }
  return;
}


