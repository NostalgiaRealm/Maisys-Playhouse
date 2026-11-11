
/* ==== FUN_14019b20 @ 14019b20 ==== 
 * signature: undefined __cdecl FUN_14019b20(double * param_1, char * param_2, int param_3, size_t param_4, int param_5)
 * body: 14019b20-14019b84
 */

void __cdecl FUN_14019b20(double *param_1,char *param_2,int param_3,size_t param_4,int param_5)

{
  int unaff_retaddr;
  
  if ((param_3 != 0x65) && (param_3 != 0x45)) {
    if (param_3 == 0x66) {
      __cftof(param_1,param_2,param_4,unaff_retaddr);
      return;
    }
    __cftog(param_1,param_2,param_4,param_5);
    return;
  }
  __cftoe(param_1,param_2,param_4,param_5,unaff_retaddr);
  return;
}


