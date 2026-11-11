
/* ==== FUN_00465ba0 @ 00465ba0 ==== 
 * signature: undefined __cdecl FUN_00465ba0(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, uint param_8, int param_9, int param_10, ushort * param_11)
 * body: 00465ba0-00465c00
 */

void __cdecl
FUN_00465ba0(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,uint param_8,int param_9,int param_10,
            ushort *param_11)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_8 >> 1;
  for (uVar1 = param_8; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = uVar2 - param_6;
    if ((int)uVar2 < 0) {
      FUN_00423a76(param_1,param_2,param_3,param_4,param_5,param_7,1,param_9,param_10,param_11);
      param_2 = param_2 + param_9;
      uVar2 = uVar2 + param_8;
    }
    param_4 = param_4 + param_10;
  }
  return;
}


