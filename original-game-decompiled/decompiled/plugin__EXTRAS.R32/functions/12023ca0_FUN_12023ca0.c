
/* ==== FUN_12023ca0 @ 12023ca0 ==== 
 * signature: undefined __cdecl FUN_12023ca0(int param_1, int param_2, undefined4 param_3)
 * body: 12023ca0-12023d96
 */

void __cdecl FUN_12023ca0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [44];
  undefined1 local_2c [44];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_68);
  DAT_12039a9c = (*pcVar1)(local_68,param_3,param_1 + 1,local_2c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&iStack_64);
  DAT_12039a9c = (*pcVar1)(iStack_64,param_3,param_2 + 1,auStack_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_60);
  DAT_12039a9c = (*pcVar1)(iStack_60,param_3,param_1 + 1,auStack_58);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_5c);
  DAT_12039a9c = (*pcVar1)(iStack_5c,param_3,param_2 + 1,local_2c);
  return;
}


