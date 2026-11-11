
/* ==== FUN_12016af0 @ 12016af0 ==== 
 * signature: undefined4 __cdecl FUN_12016af0(int param_1)
 * body: 12016af0-12016b96
 */

undefined4 __cdecl FUN_12016af0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  FUN_12027640(param_1 + 0xe);
  if (*(int *)(param_1 + 0x2e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  if (*(int *)(param_1 + 0x6a) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x6a));
    *(undefined4 *)(param_1 + 0x6a) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
    *(undefined4 *)(param_1 + 0x66) = 0;
  }
  return 0;
}


