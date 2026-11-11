
/* ==== FUN_1201f780 @ 1201f780 ==== 
 * signature: undefined4 __cdecl FUN_1201f780(int param_1)
 * body: 1201f780-1201f7d5
 */

undefined4 __cdecl FUN_1201f780(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x1e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x1e));
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  return 0;
}


