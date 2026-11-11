
/* ==== FUN_00408d50 @ 00408d50 ==== 
 * signature: ushort __cdecl FUN_00408d50(ushort * param_1)
 * body: 00408d50-00408d71
 */

ushort __cdecl FUN_00408d50(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (((short)uVar1 < (short)param_1[2]) && (uVar1 = param_1[3], (short)param_1[1] < (short)uVar1))
  {
    return uVar1 & 0xff00;
  }
  return CONCAT11((char)(uVar1 >> 8),1);
}


