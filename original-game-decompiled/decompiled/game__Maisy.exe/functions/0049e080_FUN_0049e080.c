
/* ==== FUN_0049e080 @ 0049e080 ==== 
 * signature: uint __cdecl FUN_0049e080(ushort param_1)
 * body: 0049e080-0049e0c1
 */

uint __cdecl FUN_0049e080(ushort param_1)

{
  uint in_EAX;
  
  if ((100 < param_1) && (in_EAX = FUN_0049e0d0(param_1), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_004df9e0 + ((uint)param_1 % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}


