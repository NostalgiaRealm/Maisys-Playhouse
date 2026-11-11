
/* ==== FUN_11014f70 @ 11014f70 ==== 
 * signature: undefined __cdecl FUN_11014f70(undefined4 * param_1, undefined2 * param_2, undefined4 param_3, int param_4, int param_5, undefined2 param_6)
 * body: 11014f70-11014fd1
 */

void __cdecl
FUN_11014f70(undefined4 *param_1,undefined2 *param_2,undefined4 param_3,int param_4,int param_5,
            undefined2 param_6)

{
  undefined4 uVar1;
  
  *param_2 = 0xffe2;
  *(undefined4 *)(param_2 + 1) = param_3;
  if (param_4 == 0) {
    *(undefined4 *)(param_2 + 3) = 0;
  }
  else {
    uVar1 = FUN_110024d0(param_1,param_4);
    *(undefined4 *)(param_2 + 3) = uVar1;
  }
  if (param_5 == 0) {
    *(undefined4 *)(param_2 + 5) = 0;
  }
  else {
    uVar1 = FUN_110024d0(param_1,param_5);
    *(undefined4 *)(param_2 + 5) = uVar1;
  }
  param_2[7] = param_6;
  return;
}


