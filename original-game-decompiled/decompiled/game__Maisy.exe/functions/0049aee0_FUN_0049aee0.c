
/* ==== FUN_0049aee0 @ 0049aee0 ==== 
 * signature: undefined4 __cdecl FUN_0049aee0(byte param_1)
 * body: 0049aee0-0049af09
 */

undefined4 __cdecl FUN_0049aee0(byte param_1)

{
  int iVar1;
  
  if (DAT_004de2f4 == 0x3a4) {
    iVar1 = x_ismbbtype(param_1,0,3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


