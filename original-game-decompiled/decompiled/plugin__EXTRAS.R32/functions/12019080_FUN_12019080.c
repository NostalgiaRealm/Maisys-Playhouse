
/* ==== FUN_12019080 @ 12019080 ==== 
 * signature: undefined __cdecl FUN_12019080(undefined4 param_1, undefined4 param_2, int param_3)
 * body: 12019080-120190e4
 */

void __cdecl FUN_12019080(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_3 + 2) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_3 + 2));
    *(undefined4 *)(param_3 + 2) = 0;
  }
  FUN_12023e10(param_1,param_2,param_3 + 6);
  return;
}


