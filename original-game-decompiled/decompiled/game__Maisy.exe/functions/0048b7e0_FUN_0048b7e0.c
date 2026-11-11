
/* ==== FUN_0048b7e0 @ 0048b7e0 ==== 
 * signature: undefined __cdecl FUN_0048b7e0(undefined4 param_1, undefined2 * param_2, int param_3)
 * body: 0048b7e0-0048b8ce
 */

void __cdecl FUN_0048b7e0(undefined4 param_1,undefined2 *param_2,int param_3)

{
  code *pcVar1;
  int local_c;
  int local_8;
  
  if (param_3 != 0) {
    *param_2 = 0x66;
    local_c = 0;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xc,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8,&local_c,param_3);
    *(int *)(param_2 + 5) = local_c;
    if (local_c == 0) {
      pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xe,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,param_2 + 7,1);
      **(undefined1 **)(param_2 + 7) = 0;
    }
    else {
      pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x34),1,0xf,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,param_2 + 7,param_3);
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


