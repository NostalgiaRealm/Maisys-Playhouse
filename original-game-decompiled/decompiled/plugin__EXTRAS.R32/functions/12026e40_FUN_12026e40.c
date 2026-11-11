
/* ==== FUN_12026e40 @ 12026e40 ==== 
 * signature: int __cdecl FUN_12026e40(undefined4 param_1, int param_2, int param_3, undefined2 * param_4)
 * body: 12026e40-12026fc0
 */

int __cdecl FUN_12026e40(undefined4 param_1,int param_2,int param_3,undefined2 *param_4)

{
  code *pcVar1;
  int iStack_38;
  int local_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined4 uStack_22;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  int aiStack_14 [5];
  
  local_34 = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x18,(int *)&local_30);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_2e,local_30),param_1,&local_34,param_2);
  if ((local_34 == 0) || (DAT_12039a9c != 0)) {
    local_30 = 0x69;
    uStack_1c = 1;
    uStack_2a = 0;
    uStack_1a = 0;
    uStack_26 = 0;
    uStack_2e = 0;
    uStack_2c = 0;
    uStack_22 = 0;
    FUN_12027170((int)aiStack_14,*(int *)(param_3 + 0xe));
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_38);
    DAT_12039a9c = (*pcVar1)(iStack_38,*(undefined4 *)(param_4 + 1),aiStack_14,0,&local_30);
    if (DAT_12039a9c == 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_38);
      DAT_12039a9c = (*pcVar1)(iStack_38,CONCAT22(uStack_2c,uStack_2e),s_objectid_12037d4c,0,
                               &uStack_1c);
      *(undefined4 *)(*(int *)(param_2 + 4) + -4 + *(short *)(param_2 + 2) * 4) = uStack_1a;
      *param_4 = 0x69;
      *(undefined4 *)(param_4 + 3) = 0;
      *(undefined4 *)(param_4 + 5) = 0;
      *(uint *)(param_4 + 1) = CONCAT22(uStack_2c,uStack_2e);
      *(undefined4 *)(param_4 + 7) = 0;
    }
  }
  else {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,aiStack_14);
    DAT_12039a9c = (*pcVar1)(aiStack_14[0],local_34,&DAT_12037920,0,param_3);
  }
  return DAT_12039a9c;
}


