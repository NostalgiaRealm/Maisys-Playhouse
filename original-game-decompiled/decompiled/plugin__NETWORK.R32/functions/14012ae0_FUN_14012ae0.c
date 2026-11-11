
/* ==== FUN_14012ae0 @ 14012ae0 ==== 
 * signature: undefined4 __cdecl FUN_14012ae0(uint param_1, undefined4 * param_2, uint * param_3)
 * body: 14012ae0-14012b8f
 */

uint __cdecl FUN_14012ae0(uint param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 in_EAX;
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  if (*param_3 < param_1) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,5,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,*param_2,&local_c);
    local_c = local_c + (param_1 - *param_3);
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,4,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,*param_2,local_c);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48 & 0xffffff00;
    }
    *param_3 = param_1;
    in_EAX = 0;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


