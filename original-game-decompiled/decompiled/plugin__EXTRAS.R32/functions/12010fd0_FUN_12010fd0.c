
/* ==== FUN_12010fd0 @ 12010fd0 ==== 
 * signature: ushort __cdecl FUN_12010fd0(ushort * param_1)
 * body: 12010fd0-12010fec
 */

ushort __cdecl FUN_12010fd0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (((short)uVar1 < (short)param_1[2]) && (uVar1 = param_1[3], (short)param_1[1] < (short)uVar1))
  {
    return uVar1 & 0xff00;
  }
  return CONCAT11((char)(uVar1 >> 8),1);
}


