
/* ==== FUN_1201ae10 @ 1201ae10 ==== 
 * signature: undefined4 __cdecl FUN_1201ae10(int param_1, int param_2)
 * body: 1201ae10-1201afc6
 */

undefined4 __cdecl FUN_1201ae10(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 uStack_24;
  uint uStack_22;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_1c);
  DAT_12039a9c = (*pcVar1)(local_1c,4,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,6,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,9,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,0x10,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,0xb,param_1 + 0x52);
  uStack_24 = 1;
  uStack_22 = *(uint *)(param_1 + 0x16) & 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,0xc,&uStack_24);
  uStack_22 = (uint)(uStack_22 == 0);
  pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,8,&uStack_24);
  if ((*(byte *)(param_1 + 0x16) & 2) != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,0xb,1);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_18);
    DAT_12039a9c = (*pcVar1)(iStack_18,9,1);
    pcVar1 = (code *)FUN_12027370(param_2,1,3,&iStack_14);
    DAT_12039a9c = (*pcVar1)(iStack_14,0x10,1);
  }
  return 0;
}


