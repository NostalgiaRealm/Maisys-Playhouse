
/* ==== FUN_11009400 @ 11009400 ==== 
 * signature: undefined __cdecl FUN_11009400(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, ushort * param_11)
 * body: 11009400-11009472
 */

void __cdecl
FUN_11009400(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
            ushort *param_11)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_6 - 1U >> 1;
  for (iVar1 = param_6; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_11005fc7(param_1,param_2,param_3,param_4,param_5,param_7,1,param_9,param_10,param_11);
    uVar2 = (uVar2 - param_8) + 1;
    if ((int)uVar2 < 0) {
      param_4 = param_4 + param_10;
      uVar2 = param_6 + -1 + uVar2;
    }
    param_2 = param_2 + param_9;
  }
  return;
}


