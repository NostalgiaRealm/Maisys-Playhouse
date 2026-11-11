
/* ==== FUN_0048bb70 @ 0048bb70 ==== 
 * signature: undefined2 __cdecl FUN_0048bb70(double param_1, double param_2)
 * body: 0048bb70-0048bb8d
 */

undefined2 __cdecl FUN_0048bb70(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = ABS(param_1 - param_2) / param_2;
  return CONCAT11(dVar1 < 0.1 | (byte)((ushort)((ushort)NAN(dVar1) << 10) >> 8) |
                  (byte)((ushort)((ushort)(dVar1 == 0.1) << 0xe) >> 8),
                  dVar1 < 0.1 || (dVar1 == 0.1) != 0);
}


