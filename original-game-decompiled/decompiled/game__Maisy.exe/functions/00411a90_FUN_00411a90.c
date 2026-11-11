
/* ==== FUN_00411a90 @ 00411a90 ==== 
 * signature: char __cdecl FUN_00411a90(HMMIO param_1, LONG param_2, char param_3)
 * body: 00411a90-00411ad5
 */

char __cdecl FUN_00411a90(HMMIO param_1,LONG param_2,char param_3)

{
  LONG LVar1;
  
  if (param_3 != '\0') {
    LVar1 = mmioSeek(param_1,param_2,0);
    return '\x01' - (LVar1 == -1);
  }
  LVar1 = mmioSeek(param_1,param_2,1);
  return '\x01' - (LVar1 == -1);
}


