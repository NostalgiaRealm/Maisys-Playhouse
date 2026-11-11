
/* ==== FUN_0043d210 @ 0043d210 ==== 
 * signature: undefined __cdecl FUN_0043d210(int * param_1, int * param_2, short * param_3)
 * body: 0043d210-0043d246
 */

void __cdecl FUN_0043d210(int *param_1,int *param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = FUN_0043ce40(param_2,*param_3);
  FUN_0043ca90(param_1,(int)*param_3,sVar1);
  *param_3 = *param_3 + sVar1;
  return;
}


