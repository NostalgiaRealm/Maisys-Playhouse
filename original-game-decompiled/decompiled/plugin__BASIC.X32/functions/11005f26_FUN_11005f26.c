
/* ==== FUN_11005f26 @ 11005f26 ==== 
 * signature: undefined __cdecl FUN_11005f26(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, uint param_5, int param_6, uint param_7, int param_8, int param_9)
 * body: 11005f26-11005f73
 */

void __cdecl
FUN_11005f26(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            uint param_5,int param_6,uint param_7,int param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    uVar1 = param_7 >> 1;
    uVar3 = param_7;
    do {
      bVar4 = uVar1 < param_5;
      uVar1 = uVar1 - param_5;
      iVar2 = param_6;
      if (bVar4) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_2 = *param_4;
          param_4 = param_4 + 1;
          param_2 = param_2 + 1;
        }
        uVar1 = uVar1 + param_7;
        param_2 = param_2 + (param_8 - param_6);
      }
      else {
        param_4 = param_4 + param_6;
      }
      param_4 = param_4 + (param_9 - param_6);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


