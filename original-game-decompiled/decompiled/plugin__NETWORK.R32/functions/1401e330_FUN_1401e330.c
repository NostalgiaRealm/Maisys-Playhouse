
/* ==== FUN_1401e330 @ 1401e330 ==== 
 * signature: uint __cdecl FUN_1401e330(ushort param_1)
 * body: 1401e330-1401e371
 */

uint __cdecl FUN_1401e330(ushort param_1)

{
  uint in_EAX;
  
  if ((100 < param_1) && (in_EAX = FUN_1401e380(param_1), (short)in_EAX != 0)) {
    return in_EAX;
  }
  if ((ushort)((uint)param_1 % 100) < 0x5b) {
    return (uint)*(ushort *)(&DAT_14027c58 + ((uint)param_1 % 100) * 6);
  }
  return in_EAX & 0xffff0000;
}


