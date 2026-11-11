
/* ==== FUN_120059c0 @ 120059c0 ==== 
 * signature: undefined4 __cdecl FUN_120059c0(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 120059c0-12005b22
 */

undefined4 __cdecl FUN_120059c0(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined2 extraout_var;
  int local_4;
  
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)0x0,(undefined4 *)0x0);
    return uVar2;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_filepath_120371c4);
  if ((char)uVar1 != '\0') {
    if (*(char *)(param_1 + 7) != '\0') {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,2,&local_4);
      DAT_12039a9c = (*pcVar3)(local_4,param_4,param_1[6]);
      return DAT_12039a9c;
    }
    return 0x10000;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_background_1203719c);
  if ((char)uVar1 != '\0') {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0xd,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_4,*(int *)((int)param_1 + 0x26) == 0);
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)&DAT_12037188);
  if ((char)uVar1 != '\0') {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0xd,&local_4);
    DAT_12039a9c = (*pcVar3)(local_4,param_4,
                             CONCAT31((int3)(CONCAT22(extraout_var,*(short *)(param_1 + 0xb) + -1)
                                            >> 8),(short)(*(short *)(param_1 + 0xb) + -1) == 0));
    return DAT_12039a9c;
  }
  return 0x10000;
}


