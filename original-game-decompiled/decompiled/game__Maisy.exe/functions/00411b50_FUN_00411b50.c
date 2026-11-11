
/* ==== FUN_00411b50 @ 00411b50 ==== 
 * signature: bool __cdecl FUN_00411b50(HMMIO param_1, int param_2, char * param_3)
 * body: 00411b50-00411b76
 */

bool __cdecl FUN_00411b50(HMMIO param_1,int param_2,char *param_3)

{
  LONG LVar1;
  
  LVar1 = mmioWrite(param_1,param_3,param_2);
  return LVar1 == param_2;
}


