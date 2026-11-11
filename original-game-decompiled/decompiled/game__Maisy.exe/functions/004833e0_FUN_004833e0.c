
/* ==== FUN_004833e0 @ 004833e0 ==== 
 * signature: undefined4 __cdecl FUN_004833e0(undefined4 param_1, int param_2, undefined4 * param_3, int param_4, undefined4 * param_5)
 * body: 004833e0-00483450
 */

undefined4 __cdecl
FUN_004833e0(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined2 uVar1;
  
  if ((((param_2 != 0) && (param_3 != (undefined4 *)0x0)) && (param_4 != 0)) &&
     (param_5 != (undefined4 *)0x0)) {
    *param_5 = 0;
    param_5[2] = param_2;
    param_5[1] = 0xaa55a5a5;
    param_5[3] = *(undefined4 *)(param_4 + 2);
    param_5[4] = *(undefined4 *)(param_4 + 6);
    param_5[5] = *param_3;
    param_5[6] = param_3[1];
    param_5[7] = param_3[2];
    param_5[8] = param_3[3];
    uVar1 = *(undefined2 *)(param_3 + 4);
    *(undefined2 *)((int)param_5 + 0x26) = 0;
    *(undefined2 *)(param_5 + 9) = uVar1;
    return 0;
  }
  return 0x10001;
}


