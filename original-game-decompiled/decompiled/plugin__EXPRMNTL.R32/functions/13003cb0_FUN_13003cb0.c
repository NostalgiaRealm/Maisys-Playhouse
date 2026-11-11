
/* ==== FUN_13003cb0 @ 13003cb0 ==== 
 * signature: undefined __cdecl FUN_13003cb0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 13003cb0-13003db7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_13003cb0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int local_8;
  int local_4;
  
  if (param_3 != 0) {
    *param_2 = 0x66;
    local_4 = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xc,&local_8);
    _DAT_13008d34 = (*pcVar1)(local_8,&local_4,param_3);
    *(int *)(param_2 + 5) = local_4;
    if (local_4 == 0) {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xe,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      pcVar1 = (code *)FUN_13003980(*(int *)(DAT_13008d30 + 0x34),1,0xf,&local_8);
      _DAT_13008d34 = (*pcVar1)(local_8,param_2 + 7,param_3);
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


