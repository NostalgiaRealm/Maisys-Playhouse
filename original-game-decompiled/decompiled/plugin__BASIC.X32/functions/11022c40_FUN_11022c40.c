
/* ==== FUN_11022c40 @ 11022c40 ==== 
 * signature: undefined __cdecl FUN_11022c40(undefined4 * param_1, int param_2, int param_3, int param_4)
 * body: 11022c40-11022ccd
 */

void __cdecl FUN_11022c40(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined2 local_24;
  int local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  short local_10 [8];
  
  if ((param_3 == 0) && (param_4 != 0)) {
    param_3 = FUN_1100fde0(param_1,param_4);
  }
  if (param_3 != 0) {
    local_1e = 0;
    local_1a = 0;
    local_16 = 0;
    local_24 = 0x69;
    local_10[2] = 0;
    local_10[3] = 0;
    local_10[4] = 0;
    local_10[5] = 0;
    local_10[6] = 0;
    local_10[7] = 0;
    local_10[0] = 1;
    local_10[1] = 0;
    local_22 = param_3;
    FUN_11017d10(param_1,*(undefined4 *)(param_2 + 0x20),local_10,*(undefined4 *)(param_2 + 0x24),
                 *(uint *)(param_2 + 0xc),(int)&local_24,param_2 + 0x7a,(short *)(param_2 + 0x38),
                 '\x01','\0');
  }
  return;
}


