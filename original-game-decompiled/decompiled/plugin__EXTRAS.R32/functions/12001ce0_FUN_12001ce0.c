
/* ==== FUN_12001ce0 @ 12001ce0 ==== 
 * signature: int __cdecl FUN_12001ce0(int param_1, short * param_2, int param_3)
 * body: 12001ce0-12001f8c
 */

int __cdecl FUN_12001ce0(int param_1,short *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined2 extraout_var;
  int iVar3;
  short sVar4;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  short sStack_98;
  undefined4 uStack_96;
  undefined4 uStack_92;
  undefined4 uStack_8e;
  undefined4 uStack_8a;
  int local_84 [11];
  short asStack_58 [22];
  short asStack_2c [22];
  
  iVar3 = 0;
  local_a4 = 0;
  local_9c = *(int *)(param_3 + 8);
  if (local_9c == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *(int *)(param_3 + 2);
  }
  if (((param_2 == (short *)0x0) || (*param_2 != 1)) ||
     (uVar2 = *(uint *)(param_2 + 1), (int)uVar2 < 1)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_12023290(param_1);
    }
    else {
      FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                   CONCAT22((short)((uint)local_9c >> 0x10),*(undefined2 *)(param_1 + 0xe)),0);
    }
    sVar4 = 1;
    if (0 < local_a0) {
      do {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_a8);
        DAT_12039a9c = (*pcVar1)(local_a8,local_9c,(int)sVar4,local_84);
        FUN_12023eb0(*(short *)(param_1 + 0xe),asStack_58);
        FUN_12018ee0(param_1,(short *)local_84,asStack_58);
        iVar3 = DAT_12039a9c;
        if (DAT_12039a9c == 0) {
          uVar2 = FUN_12023da0(param_1,asStack_58,*(undefined4 *)(param_1 + 0x10));
          *(int *)(param_1 + 0x14) = (int)(short)uVar2;
        }
        FUN_12018a40(param_1,asStack_58);
        if ((iVar3 != 0) || (*(int *)(param_1 + 0x14) != 0)) {
          if (*(int *)(param_1 + 0x10) != 0) {
            FUN_12023770(param_1,*(int *)(param_1 + 0x10),
                         CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0xe)),0);
          }
          return 0x10000;
        }
        sVar4 = sVar4 + 1;
      } while (sVar4 <= local_a0);
      iVar3 = 0;
    }
  }
  else {
    if (*(short *)(param_1 + 0xe) != -1) {
      return 0x10000;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,local_84);
      DAT_12039a9c = (*pcVar1)(local_84[0],*(undefined4 *)(param_1 + 0x10),&local_a4);
    }
    if ((local_a4 == 0) || (local_a4 < uVar2)) {
      return 0x10000;
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,local_84);
    DAT_12039a9c = (*pcVar1)(local_84[0],*(undefined4 *)(param_1 + 0x10),uVar2,asStack_2c);
    uStack_92 = 0;
    uStack_8e = 0;
    uStack_96 = 0;
    uStack_8a = 0;
    sStack_98 = 0x69;
    FUN_12018b80(param_1,asStack_2c,&sStack_98);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_a8);
    iVar3 = (*pcVar1)(local_a8,uStack_96,s_value_120370b8,0,param_3);
    DAT_12039a9c = iVar3;
  }
  return iVar3;
}


