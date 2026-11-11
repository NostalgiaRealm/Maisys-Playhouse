
/* ==== FUN_12003300 @ 12003300 ==== 
 * signature: uint __cdecl FUN_12003300(byte * param_1)
 * body: 12003300-12003326
 */

uint __cdecl FUN_12003300(byte *param_1)

{
  return ((uint)param_1[2] | (uint)*param_1 << 0x10) << 8 | (uint)param_1[1] << 0x10 |
         (uint)param_1[3];
}


