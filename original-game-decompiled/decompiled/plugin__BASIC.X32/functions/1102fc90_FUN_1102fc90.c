
/* ==== FUN_1102fc90 @ 1102fc90 ==== 
 * signature: uint __cdecl FUN_1102fc90(ushort param_1)
 * body: 1102fc90-1102fcd1
 */

uint __cdecl FUN_1102fc90(ushort param_1)

{
  uint in_EAX;
  
  if ((100 < param_1) && (in_EAX = FUN_1102fce0(param_1), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_11037838 + ((uint)param_1 % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}


