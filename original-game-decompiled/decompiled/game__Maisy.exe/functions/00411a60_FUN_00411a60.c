
/* ==== FUN_00411a60 @ 00411a60 ==== 
 * signature: LONG __cdecl FUN_00411a60(HMMIO param_1)
 * body: 00411a60-00411a85
 */

LONG __cdecl FUN_00411a60(HMMIO param_1)

{
  LONG LVar1;
  
  LVar1 = mmioSeek(param_1,0,2);
  mmioSeek(param_1,0,0);
  return LVar1;
}


