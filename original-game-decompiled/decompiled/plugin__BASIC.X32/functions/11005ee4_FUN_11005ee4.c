
/* ==== FUN_11005ee4 @ 11005ee4 ==== 
 * signature: undefined __cdecl FUN_11005ee4(undefined4 param_1, undefined4 * param_2, undefined4 param_3, undefined4 * param_4, uint param_5, int param_6, int param_7, int param_8)
 * body: 11005ee4-11005f25
 */

void __cdecl
FUN_11005ee4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
            uint param_5,int param_6,int param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_5 != 0) && (param_6 != 0)) {
    uVar1 = param_5 >> 2;
    do {
      for (; uVar2 = param_5 & 3, uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = *param_4;
        param_4 = param_4 + 1;
        param_2 = param_2 + 1;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      param_4 = (undefined4 *)((int)param_4 + (param_8 - param_5));
      param_2 = (undefined4 *)((int)param_2 + (param_7 - param_5));
      param_6 = param_6 + -1;
      uVar1 = param_5 >> 2;
    } while (param_6 != 0);
  }
  return;
}


