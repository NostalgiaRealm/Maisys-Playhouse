
/* ==== FUN_10009379 @ 10009379 ==== 
 * signature: undefined4 __cdecl FUN_10009379(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 10009379-100094ae;100094b4-100094ec
 */

undefined4 __cdecl
FUN_10009379(short *param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 local_8;
  
  local_8 = 0x10000;
  if ((param_2 == (short *)0x0) || (*param_2 != 1)) {
    local_8 = 0x10000;
  }
  else if ((*param_1 == 0x17) || (*param_1 == 0x6a)) {
    if (*param_1 == 0x6a) {
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(uint *)(param_2 + 1) & 0xffffff) == 1) {
      uVar1 = *(uint *)(param_2 + 1) & 0xff000000;
      if (uVar1 == 0x20000000) {
        if (param_5 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_5;
          *(undefined4 *)(param_1 + 2) = param_5[1];
          param_1[4] = *(short *)(param_5 + 2);
          local_8 = 0;
        }
      }
      else if (uVar1 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_4;
          *(undefined4 *)(param_1 + 2) = param_4[1];
          param_1[4] = *(short *)(param_4 + 2);
          local_8 = 0;
        }
      }
      else if ((uVar1 == 0x80000000) && (param_3 != (undefined4 *)0x0)) {
        *(undefined4 *)param_1 = *param_3;
        *(undefined4 *)(param_1 + 2) = param_3[1];
        param_1[4] = *(short *)(param_3 + 2);
        local_8 = 0;
      }
    }
  }
  else {
    local_8 = 0x10000;
  }
  return local_8;
}


