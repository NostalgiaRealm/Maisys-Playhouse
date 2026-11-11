
/* ==== FUN_110198f0 @ 110198f0 ==== 
 * signature: undefined __cdecl FUN_110198f0(int param_1, int param_2, short * param_3, int param_4)
 * body: 110198f0-110199ee
 */

void __cdecl FUN_110198f0(int param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
    if (*param_3 == 0x17) {
      *param_3 = 0x19;
      uVar2 = FUN_1100fc40(param_1);
      *(undefined4 *)(param_3 + 1) = uVar2;
      return;
    }
  }
  else {
    if (param_4 == 10000) {
      sVar1 = *param_3;
      if (sVar1 != 1) {
        if (sVar1 == 0x15) {
          *(double *)(param_3 + 1) =
               (double)(int)((-(uint)((*(byte *)(param_2 + 0x56) & 1) == 0) & 0xfffffffe) +
                             (int)*(short *)(param_2 + 0x2a) + 2);
          return;
        }
        if (sVar1 != 0x17) {
          return;
        }
        *param_3 = 1;
      }
      *(uint *)(param_3 + 1) =
           (-(uint)((*(byte *)(param_2 + 0x56) & 1) == 0) & 0xfffffffe) +
           (int)*(short *)(param_2 + 0x2a) + 2;
      return;
    }
    if (param_4 != 0x2711) {
      return;
    }
    sVar1 = *param_3;
    if (sVar1 != 1) {
      if (sVar1 == 0x15) {
        *(double *)(param_3 + 1) = (double)(int)*(short *)(param_2 + 0x28);
        return;
      }
      if (sVar1 != 0x17) {
        return;
      }
      *param_3 = 1;
    }
    *(int *)(param_3 + 1) = (int)*(short *)(param_2 + 0x28);
  }
  return;
}


