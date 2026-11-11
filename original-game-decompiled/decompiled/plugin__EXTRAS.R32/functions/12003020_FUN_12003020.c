
/* ==== FUN_12003020 @ 12003020 ==== 
 * signature: undefined4 __cdecl FUN_12003020(int param_1)
 * body: 12003020-120030ee
 */

undefined4 __cdecl FUN_12003020(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  int local_c;
  undefined2 local_8;
  undefined4 local_6;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    local_6 = *(undefined4 *)(param_1 + 0x3a);
    local_8 = 1;
    if ((*(uint *)(param_1 + 0x16) & 1) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_c);
      DAT_12039a9c = (*pcVar1)(local_c,param_1,0);
      *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 5;
    }
  }
  else {
    local_8 = 1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    lVar2 = __ftol();
    local_6 = (undefined4)lVar2;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,6,&local_c);
  DAT_12039a9c = (*pcVar1)(local_c,*(undefined4 *)(param_1 + 0x62),s_volume_12037108,0,&local_8);
  return 0;
}


