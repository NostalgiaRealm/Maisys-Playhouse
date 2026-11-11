
/* ==== FUN_00444c10 @ 00444c10 ==== 
 * signature: int __cdecl FUN_00444c10(int param_1, short param_2, short param_3)
 * body: 00444c10-00444c8a
 */

int __cdecl FUN_00444c10(int param_1,short param_2,short param_3)

{
  if (param_3 == 2) {
    if (param_2 == 0x10) {
      return (-(uint)(param_1 == 0xac44) & 0x780) + 0x80;
    }
    return (-(uint)(param_1 == 0x5622) & 0x1e) + 2;
  }
  if (param_3 != 1) {
    return 0x10;
  }
  if (param_2 == 0x10) {
    return (-(uint)(param_1 == 0xac44) & 0x3c0) + 0x40;
  }
  return (-(uint)(param_1 == 0x5622) & 0xf) + 1;
}


