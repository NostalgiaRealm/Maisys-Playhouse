
/* ==== FUN_14008ed0 @ 14008ed0 ==== 
 * signature: undefined __cdecl FUN_14008ed0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 14008ed0-14008fd7
 */

void __cdecl FUN_14008ed0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int local_8;
  int local_4;
  
  if (param_3 != 0) {
    *param_2 = 0x66;
    local_4 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_8);
    DAT_14028e48 = (*pcVar1)(local_8,&local_4,param_3);
    *(int *)(param_2 + 5) = local_4;
    if (local_4 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xe,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xf,&local_8);
      DAT_14028e48 = (*pcVar1)(local_8,param_2 + 7,param_3);
    }
    *(int *)(param_2 + 3) = *(int *)(param_2 + 5) + 1;
    return;
  }
  *param_2 = 0x66;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}


