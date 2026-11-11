
/* ==== FUN_0043b130 @ 0043b130 ==== 
 * signature: undefined4 __cdecl FUN_0043b130(int param_1, int param_2, undefined4 param_3, undefined * param_4)
 * body: 0043b130-0043b1aa
 */

undefined4 __cdecl FUN_0043b130(int param_1,int param_2,undefined4 param_3,undefined *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  local_8 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar4 = FUN_0043a270(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar5 = FUN_0043a270(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < local_8) {
    do {
      (*(code *)param_4)(iVar5,iVar4,uVar1,param_3);
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + iVar3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 1;
}


