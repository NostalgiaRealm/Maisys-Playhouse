
/* ==== FUN_11005f74 @ 11005f74 ==== 
 * signature: undefined __cdecl FUN_11005f74(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, int param_8, int param_9)
 * body: 11005f74-11005fc6
 */

void __cdecl
FUN_11005f74(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    uVar1 = param_5 - 1;
    uVar2 = uVar1 >> 1;
    iVar3 = param_6;
    do {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *param_4;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + (param_8 - param_6);
      bVar4 = uVar2 < param_7 - 1U;
      uVar2 = uVar2 - (param_7 - 1U);
      if (bVar4) {
        uVar2 = uVar2 + uVar1;
        iVar3 = param_9 - param_6;
      }
      else {
        iVar3 = -param_6;
      }
      param_4 = param_4 + iVar3;
      param_5 = param_5 + -1;
      iVar3 = param_6;
    } while (param_5 != 0);
  }
  return;
}


