
/* ==== FUN_1200eba0 @ 1200eba0 ==== 
 * signature: undefined4 __cdecl FUN_1200eba0(int param_1)
 * body: 1200eba0-1200ec01
 */

undefined4 __cdecl FUN_1200eba0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  FUN_1200fc20(*(undefined4 *)(param_1 + 0x2c));
  return 0;
}


