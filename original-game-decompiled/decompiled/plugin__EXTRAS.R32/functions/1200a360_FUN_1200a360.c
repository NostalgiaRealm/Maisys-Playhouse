
/* ==== FUN_1200a360 @ 1200a360 ==== 
 * signature: undefined4 __cdecl FUN_1200a360(int param_1)
 * body: 1200a360-1200a419
 */

undefined4 __cdecl FUN_1200a360(int param_1)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  if (*(char *)(param_1 + 0x9c) != '\0') {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,param_1,0);
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,0,param_1 + 0x48);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1,param_1 + 0x5a);
  return 0;
}


