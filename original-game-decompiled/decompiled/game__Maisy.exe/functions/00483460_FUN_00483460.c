
/* ==== FUN_00483460 @ 00483460 ==== 
 * signature: undefined4 __cdecl FUN_00483460(undefined4 param_1, int param_2, undefined4 * param_3, int param_4, undefined4 * param_5, undefined4 param_6, undefined4 * param_7)
 * body: 00483460-004834e9
 */

undefined4 __cdecl
FUN_00483460(undefined4 param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((((param_2 != 0) && (param_3 != (undefined4 *)0x0)) && (param_4 != 0)) &&
     (param_7 != (undefined4 *)0x0)) {
    param_7[2] = param_2;
    param_7[1] = 0xaa55a5a5;
    *param_7 = param_6;
    param_7[3] = *(undefined4 *)(param_4 + 2);
    param_7[4] = *(undefined4 *)(param_4 + 6);
    param_7[5] = *param_3;
    param_7[6] = param_3[1];
    param_7[7] = param_3[2];
    param_7[8] = param_3[3];
    *(undefined2 *)(param_7 + 9) = *(undefined2 *)(param_3 + 4);
    if (param_5 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)((int)param_7 + 0x26);
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *param_5;
        param_5 = param_5 + 1;
        puVar2 = puVar2 + 1;
      }
      return 0;
    }
    *(undefined2 *)((int)param_7 + 0x26) = 0;
    return 0;
  }
  return 0x10001;
}


