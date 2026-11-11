
/* ==== FUN_0048ba90 @ 0048ba90 ==== 
 * signature: undefined4 __cdecl FUN_0048ba90(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
 * body: 0048ba90-0048bb6d
 */

undefined4 __cdecl
FUN_0048ba90(short *param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  short sVar1;
  uint uVar2;
  
  if (((param_2 != (short *)0x0) && (*param_2 == 1)) &&
     ((sVar1 = *param_1, sVar1 == 0x17 || (sVar1 == 0x6a)))) {
    if (sVar1 == 0x6a) {
      *param_1 = 0x17;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    if ((*(uint *)(param_2 + 1) & 0xffffff) == 1) {
      uVar2 = *(uint *)(param_2 + 1) & 0xff000000;
      if (uVar2 == 0x20000000) {
        if (param_5 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_5;
          *(undefined4 *)(param_1 + 2) = param_5[1];
          param_1[4] = *(short *)(param_5 + 2);
          return 0;
        }
      }
      else if (uVar2 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_4;
          *(undefined4 *)(param_1 + 2) = param_4[1];
          param_1[4] = *(short *)(param_4 + 2);
          return 0;
        }
      }
      else {
        if (uVar2 != 0x80000000) {
          return 0x10000;
        }
        if (param_3 != (undefined4 *)0x0) {
          *(undefined4 *)param_1 = *param_3;
          *(undefined4 *)(param_1 + 2) = param_3[1];
          param_1[4] = *(short *)(param_3 + 2);
          return 0;
        }
      }
    }
  }
  return 0x10000;
}


