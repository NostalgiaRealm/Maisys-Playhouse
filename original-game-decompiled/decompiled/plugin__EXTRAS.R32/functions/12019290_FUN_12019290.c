
/* ==== FUN_12019290 @ 12019290 ==== 
 * signature: undefined4 __cdecl FUN_12019290(int param_1, short * param_2)
 * body: 12019290-12019425
 */

undefined4 __cdecl FUN_12019290(int param_1,short *param_2)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  short local_c;
  undefined1 auStack_a [4];
  int iStack_6;
  
  if (*param_2 != -1) {
    pcVar1 = (code *)FUN_12027370(param_1,1,6,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,param_2);
    return DAT_12039a9c;
  }
  pcVar1 = (code *)FUN_12027370(param_1,1,8,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,&local_c,1);
  if (local_c != -1) {
    return 0x10002;
  }
  pcVar1 = (code *)FUN_12027370(param_1,1,10,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,auStack_a,1);
  pcVar1 = (code *)FUN_12027370(param_1,1,10,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,&iStack_6,1);
  if (iStack_6 == 0) {
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_14);
    DAT_12039a9c = (*pcVar1)(local_14,param_2 + 1,iStack_6 + -1);
    pcVar1 = (code *)FUN_12027370(param_1,1,3,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,*(undefined4 *)(param_2 + 1),iStack_6);
  }
  pcVar1 = (code *)FUN_12027370(param_1,1,10,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,param_2 + 3,1);
  pcVar1 = (code *)FUN_12027370(param_1,1,10,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_2 + 5,8);
  return DAT_12039a9c;
}


