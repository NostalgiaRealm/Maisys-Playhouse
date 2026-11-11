
/* ==== FUN_00411b20 @ 00411b20 ==== 
 * signature: bool __cdecl FUN_00411b20(HMMIO param_1, int param_2, HPSTR param_3)
 * body: 00411b20-00411b46
 */

bool __cdecl FUN_00411b20(HMMIO param_1,int param_2,HPSTR param_3)

{
  LONG LVar1;
  
  LVar1 = mmioRead(param_1,param_3,param_2);
  return LVar1 == param_2;
}


