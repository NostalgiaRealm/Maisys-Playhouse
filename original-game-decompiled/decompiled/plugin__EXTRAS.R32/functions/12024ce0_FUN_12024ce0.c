
/* ==== FUN_12024ce0 @ 12024ce0 ==== 
 * signature: undefined4 __cdecl FUN_12024ce0(int param_1, int param_2)
 * body: 12024ce0-12024e97
 */

undefined4 __cdecl FUN_12024ce0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_1e;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_1e = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,&local_1e,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x58);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x62);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x6c);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1);
  **(undefined4 **)(param_1 + 0x1e) = **(undefined4 **)(param_1 + 0xe);
  *(undefined4 *)(*(int *)(param_1 + 0x1e) + 4) = *(undefined4 *)(*(int *)(param_1 + 0x16) + 4);
  pcVar1 = (code *)FUN_12027370(param_2,1,9,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,*(undefined4 *)(param_1 + 0x1e),3);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x76);
  if ((*(byte *)(param_1 + 0x7b) & 0x20) != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,param_1 + 0x22);
  }
  if ((*(byte *)(param_1 + 0x7b) & 0x40) != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,param_1 + 0x34);
  }
  if ((*(byte *)(param_1 + 0x7b) & 0x80) != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,param_1 + 0x46);
  }
  return 0;
}


