
/* ==== FUN_12021e50 @ 12021e50 ==== 
 * signature: undefined4 __cdecl FUN_12021e50(int param_1, int param_2)
 * body: 12021e50-12021f08
 */

undefined4 __cdecl FUN_12021e50(int param_1,int param_2)

{
  code *pcVar1;
  int local_4;
  
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,3,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1,*(undefined4 *)(param_1 + 0x16));
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
     ((*(int *)(param_2 + 0x10) == *(int *)(param_1 + 0x10) &&
      ((*(byte *)(param_1 + 0x20) & 1) != 0)))) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,3,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1,0);
    *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfe;
    return 0;
  }
  return 0x10000;
}


