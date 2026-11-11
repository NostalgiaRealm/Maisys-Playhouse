
/* ==== FUN_12019c00 @ 12019c00 ==== 
 * signature: undefined4 __cdecl FUN_12019c00(int param_1, uint param_2, short * param_3)
 * body: 12019c00-12019c99
 */

undefined4 __cdecl FUN_12019c00(int param_1,uint param_2,short *param_3)

{
  code *pcVar1;
  int iVar2;
  uint local_8;
  int local_4;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x10),&local_8);
  }
  if (local_8 < param_2) {
    *(undefined4 *)(param_1 + 0x14) = 2;
    return 0x10000;
  }
  iVar2 = FUN_120194d0(param_1,*(int *)(param_1 + 0x10),param_2,param_3);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 3;
    return 0x10000;
  }
  return 0;
}


