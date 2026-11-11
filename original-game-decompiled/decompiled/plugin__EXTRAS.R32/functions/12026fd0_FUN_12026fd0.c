
/* ==== FUN_12026fd0 @ 12026fd0 ==== 
 * signature: undefined4 __cdecl FUN_12026fd0(int param_1, int param_2, int param_3)
 * body: 12026fd0-12027163
 */

undefined4 __cdecl FUN_12026fd0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 local_20;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  undefined4 uStack_12;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&local_20);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_20._2_2_,(undefined2)local_20),param_2,param_3,param_1);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_c);
  DAT_12039a9c = (*pcVar2)(iStack_c,param_2,param_3,param_1 + 10);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_8);
  DAT_12039a9c = (*pcVar2)(iStack_8,param_2,param_3,param_1 + 0x12);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,4,&iStack_4);
  DAT_12039a9c = (*pcVar2)(iStack_4,param_2,param_3,param_1 + 0x1a);
  if (param_2 != 0) {
    return 0;
  }
  local_20._0_2_ = 0x69;
  uStack_1a = 0;
  uStack_16 = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_3 + 4) + 2);
  local_20._2_2_ = (undefined2)uVar1;
  uStack_1c = (undefined2)((uint)uVar1 >> 0x10);
  uStack_12 = 0;
  if ((*(byte *)(param_1 + 0x7b) & 0x20) != 0) {
    iVar3 = FUN_12026e40(param_1,param_1 + 10,param_1 + 0x22,(undefined2 *)&local_20);
    if (iVar3 != 0) goto LAB_1202713a;
    **(undefined4 **)(param_1 + 0x16) = **(undefined4 **)(param_1 + 0xe);
    **(undefined4 **)(param_1 + 0x1e) = **(undefined4 **)(param_1 + 0x16);
  }
  iVar3 = 0;
  if ((*(byte *)(param_1 + 0x7b) & 0x40) != 0) {
    iVar3 = FUN_12026e40(param_1,param_1 + 0x12,param_1 + 0x34,(undefined2 *)&local_20);
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x16) + 4);
    iVar3 = 0;
  }
LAB_1202713a:
  if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x7b) & 0x80) != 0)) {
    FUN_12026e40(param_1,param_1 + 0x1a,param_1 + 0x46,(undefined2 *)&local_20);
  }
  return 0;
}


