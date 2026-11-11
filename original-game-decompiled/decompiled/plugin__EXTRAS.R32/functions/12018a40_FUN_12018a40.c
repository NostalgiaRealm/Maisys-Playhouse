
/* ==== FUN_12018a40 @ 12018a40 ==== 
 * signature: undefined4 __cdecl FUN_12018a40(undefined4 param_1, short * param_2)
 * body: 12018a40-12018ada
 */

undefined4 __cdecl FUN_12018a40(undefined4 param_1,short *param_2)

{
  code *pcVar1;
  int local_4;
  
  if (*param_2 == -1) {
    if (*(int *)(param_2 + 1) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
      DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_2 + 1));
    }
    param_2[1] = 0;
    param_2[2] = 0;
    return DAT_12039a9c;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,param_2);
  return DAT_12039a9c;
}


