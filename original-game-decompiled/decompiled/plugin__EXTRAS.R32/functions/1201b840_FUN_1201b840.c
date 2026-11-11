
/* ==== FUN_1201b840 @ 1201b840 ==== 
 * signature: undefined4 __cdecl FUN_1201b840(int param_1, int param_2)
 * body: 1201b840-1201b94b
 */

undefined4 __cdecl FUN_1201b840(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_22;
  undefined2 uStack_20;
  uint uStack_1e;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_22 = 4;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,&local_18);
  DAT_12039a9c = (*pcVar1)(local_18,&local_22,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_14);
  DAT_12039a9c = (*pcVar1)(iStack_14,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 10);
  uStack_20 = 1;
  uStack_1e = *(uint *)(param_1 + 0x16) & 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,&uStack_20);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x32);
  return 0;
}


