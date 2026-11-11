
/* ==== FUN_00431b20 @ 00431b20 ==== 
 * signature: undefined __cdecl FUN_00431b20(int param_1, int param_2, int param_3, short * param_4)
 * body: 00431b20-00431b48
 */

void __cdecl FUN_00431b20(int param_1,int param_2,int param_3,short *param_4)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + param_1) + param_3;
  cVar1 = *pcVar2;
  *pcVar2 = '\0';
  FUN_00454fa0(param_4,(char *)(param_2 + param_1));
  *pcVar2 = cVar1;
  return;
}


