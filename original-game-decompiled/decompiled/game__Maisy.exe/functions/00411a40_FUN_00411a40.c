
/* ==== FUN_00411a40 @ 00411a40 ==== 
 * signature: bool __cdecl FUN_00411a40(HMMIO param_1)
 * body: 00411a40-00411a5a
 */

bool __cdecl FUN_00411a40(HMMIO param_1)

{
  MMRESULT MVar1;
  
  MVar1 = mmioClose(param_1,0);
  return MVar1 == 0;
}


