
/* ==== FUN_1201d180 @ 1201d180 ==== 
 * signature: undefined4 __cdecl FUN_1201d180(int param_1, int param_2)
 * body: 1201d180-1201d2eb
 */

undefined4 __cdecl FUN_1201d180(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_26;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_26 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_24);
  DAT_12039a9c = (*pcVar1)(local_24,&local_26,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x14);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1 + 0x1e);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x24);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,param_1 + 0x36);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x62);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x8e);
  return 0;
}


