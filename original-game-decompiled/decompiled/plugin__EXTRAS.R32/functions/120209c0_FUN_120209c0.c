
/* ==== FUN_120209c0 @ 120209c0 ==== 
 * signature: undefined4 __cdecl FUN_120209c0(int param_1)
 * body: 120209c0-12020a5a
 */

undefined4 __cdecl FUN_120209c0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0xe) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0xe));
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0;
}


