
/* ==== FUN_0042df60 @ 0042df60 ==== 
 * signature: undefined2 __stdcall FUN_0042df60(int param_1)
 * body: 0042df60-0042dfe0
 */

undefined2 FUN_0042df60(int param_1)

{
  short sVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0xd;
  }
  uVar2 = *(uint *)(param_1 + 0x1e);
  if ((uVar2 & 0x400) != 0) {
    return 0;
  }
  if ((uVar2 & 2) == 0) {
    return 10;
  }
  sVar1 = *(short *)(param_1 + 0x22);
  if (sVar1 == 0x43) {
    return 4;
  }
  if (sVar1 == 0x40) {
    return 0;
  }
  if (sVar1 == 0x3f) {
    return 6;
  }
  if (((*(short *)(param_1 + 0x60) == 0) && ((uVar2 & 0x40000000) == 0)) && (sVar1 != 0x43)) {
    return 7;
  }
  return 8;
}


