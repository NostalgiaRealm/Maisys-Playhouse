
/* ==== FUN_1001273c @ 1001273c ==== 
 * signature: int __cdecl FUN_1001273c(int param_1)
 * body: 1001273c-1001277e
 */

int __cdecl FUN_1001273c(int param_1)

{
  DAT_10024040 = (DAT_10024040 % 0xadc8) * 0xbc8f + (DAT_10024040 / 0xadc8) * -0xd47;
  if (DAT_10024040 < 0) {
    DAT_10024040 = DAT_10024040 + 0x7fffffff;
  }
  return DAT_10024040 % param_1 + 1;
}


