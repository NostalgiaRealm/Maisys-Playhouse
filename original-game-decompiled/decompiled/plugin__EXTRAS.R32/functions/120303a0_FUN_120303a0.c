
/* ==== FUN_120303a0 @ 120303a0 ==== 
 * signature: uint __cdecl FUN_120303a0(ushort param_1)
 * body: 120303a0-120303e1
 */

uint __cdecl FUN_120303a0(ushort param_1)

{
  uint in_EAX;
  
  if ((100 < param_1) && (in_EAX = FUN_120303f0(param_1), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_12039128 + ((uint)param_1 % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}


