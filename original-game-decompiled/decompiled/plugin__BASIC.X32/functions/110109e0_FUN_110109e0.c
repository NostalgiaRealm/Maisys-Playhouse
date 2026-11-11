
/* ==== FUN_110109e0 @ 110109e0 ==== 
 * signature: undefined __cdecl FUN_110109e0(byte * param_1)
 * body: 110109e0-11010a30
 */

void __cdecl FUN_110109e0(byte *param_1)

{
  *(uint *)(param_1 + 4) =
       ((uint)param_1[3] * 0x3c) / 100 +
       (((uint)*param_1 * 0x3c + (uint)param_1[1]) * 0x3c + (uint)param_1[2]) * 0x3c;
  return;
}


