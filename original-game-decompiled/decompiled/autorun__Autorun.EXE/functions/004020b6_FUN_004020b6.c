
/* ==== FUN_004020b6 @ 004020b6 ==== 
 * signature: uint __stdcall FUN_004020b6(byte * param_1, int param_2)
 * body: 004020b6-00402105
 */

uint FUN_004020b6(byte *param_1,int param_2)

{
  if (param_1 == (byte *)0x0) {
    DAT_00404000 = 0xffffffff;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      DAT_00404000 = DAT_00404000 >> 8 ^
                     *(uint *)(DAT_00404374 + (DAT_00404000 & 0xff ^ (uint)*param_1) * 4);
      param_1 = param_1 + 1;
    }
  }
  return ~DAT_00404000;
}


