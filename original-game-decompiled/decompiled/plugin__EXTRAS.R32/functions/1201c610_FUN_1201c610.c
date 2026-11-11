
/* ==== FUN_1201c610 @ 1201c610 ==== 
 * signature: undefined4 __cdecl FUN_1201c610(int param_1)
 * body: 1201c610-1201c6bb
 */

undefined4 __cdecl FUN_1201c610(int param_1)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,0,param_1 + 0x24);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,param_1,param_1 + 0x36);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,param_1 + 0x62);
  return 0;
}


