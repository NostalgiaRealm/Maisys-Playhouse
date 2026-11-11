
/* ==== FUN_12011cd0 @ 12011cd0 ==== 
 * signature: undefined4 __cdecl FUN_12011cd0(int param_1)
 * body: 12011cd0-12011e08
 */

undefined4 __cdecl FUN_12011cd0(int param_1)

{
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,&local_8);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x24,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,local_8,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,0,param_1 + 0x3e);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,param_1,param_1 + 0x50);
  if (*(int *)(param_1 + 0x24) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return 0;
}


