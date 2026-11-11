
/* ==== FUN_110202d0 @ 110202d0 ==== 
 * signature: undefined4 __cdecl FUN_110202d0(int param_1, int param_2, undefined4 param_3, undefined * param_4, undefined * param_5, undefined4 param_6, undefined4 param_7)
 * body: 110202d0-11020394
 */

undefined4 __cdecl
FUN_110202d0(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined *param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  int iVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar7 = *(int *)(param_2 + 8);
  iVar5 = FUN_1101f460(CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_2 + 0x20)),
                       *(undefined4 *)(param_2 + 0x1c));
  iVar6 = FUN_1101f460(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x20)),
                       *(undefined4 *)(param_1 + 0x1c));
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 4);
  if (param_4 == (undefined *)0x0) {
    if (0 < iVar7) {
      do {
        (*(code *)param_5)(iVar6,iVar5,uVar1,param_3);
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 + iVar3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (0 < iVar7) {
    do {
      (*(code *)param_4)(iVar6,param_7,param_6,uVar4);
      (*(code *)param_5)(param_7,iVar5,uVar1,param_3);
      iVar5 = iVar5 + iVar2;
      iVar6 = iVar6 + iVar3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 1;
}


