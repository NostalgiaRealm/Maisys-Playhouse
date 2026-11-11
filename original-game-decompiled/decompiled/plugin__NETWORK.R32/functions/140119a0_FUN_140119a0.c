
/* ==== FUN_140119a0 @ 140119a0 ==== 
 * signature: int __cdecl FUN_140119a0(undefined4 param_1, int param_2, int param_3, undefined4 param_4, int * param_5, int * param_6)
 * body: 140119a0-14011a86
 */

int __cdecl
FUN_140119a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5,int *param_6
            )

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  if (*param_5 < param_3 + param_2) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,param_4);
    *param_5 = param_3 + param_2 + 0x200;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,4,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,param_4,*param_5);
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,param_4,param_6);
    *param_6 = *param_6 + 0x29;
    if (DAT_14028e48 != 0) {
      return DAT_14028e48;
    }
  }
  return 0;
}


