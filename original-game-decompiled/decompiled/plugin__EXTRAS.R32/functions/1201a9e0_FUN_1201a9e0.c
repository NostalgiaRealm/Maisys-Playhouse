
/* ==== FUN_1201a9e0 @ 1201a9e0 ==== 
 * signature: undefined4 __cdecl FUN_1201a9e0(int param_1)
 * body: 1201a9e0-1201aa6f
 */

undefined4 __cdecl FUN_1201a9e0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1,0);
  }
  if (*(int *)(param_1 + 0x2e) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  return 0;
}


