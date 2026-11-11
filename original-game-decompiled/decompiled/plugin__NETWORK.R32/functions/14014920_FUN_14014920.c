
/* ==== FUN_14014920 @ 14014920 ==== 
 * signature: undefined4 __cdecl FUN_14014920(int param_1, int param_2, int * param_3, int * param_4, int * param_5)
 * body: 14014920-14014b22
 */

undefined4 __cdecl FUN_14014920(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  code *pcVar2;
  int local_c;
  int local_8;
  int iStack_4;
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1f,&local_8);
  DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,s_Content_Length__14026b6c);
  if (local_c == 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,&DAT_1402637c);
    if (local_c == 0) {
      *param_4 = param_2;
      *param_3 = param_1;
      *param_5 = param_2;
    }
    else {
      *param_4 = (param_2 - (local_c + 4)) + param_1;
      *param_3 = local_c + 4;
      param_2 = *param_4;
      *param_5 = param_2;
      if ((0 < *param_4) && (param_2 = *param_3, *(char *)param_2 == '\0')) {
        *param_3 = param_2 + 1;
        *param_4 = *param_4 + -1;
        return CONCAT31((int3)((uint)(param_2 + 1) >> 8),1);
      }
    }
  }
  else {
    *param_5 = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,6,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&iStack_4,local_c,0x3a);
    if (iStack_4 != 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x1e,&local_8);
      DAT_14028e48 = (*pcVar2)(local_8,param_5,iStack_4 + 1);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_8);
    DAT_14028e48 = (*pcVar2)(local_8,&local_c,param_1,&DAT_1402637c);
    if (local_c == 0) {
      *param_4 = param_2;
      *param_3 = param_1;
      *param_5 = param_2;
      return CONCAT31((int3)((uint)param_2 >> 8),1);
    }
    pcVar1 = (char *)(local_c + 4);
    param_2 = (param_2 - (int)pcVar1) + param_1;
    *param_4 = param_2;
    *param_3 = (int)pcVar1;
    if ((0 < *param_4) && (*pcVar1 == '\0')) {
      *param_3 = local_c + 5;
      *param_4 = *param_4 + -1;
      return CONCAT31((int3)((uint)(local_c + 5) >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


