
/* ==== FUN_0046d250 @ 0046d250 ==== 
 * signature: undefined4 __cdecl FUN_0046d250(char * param_1, int * param_2)
 * body: 0046d250-0046d273
 */

undefined4 __cdecl FUN_0046d250(char *param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = FUN_0046d200(param_1,'|');
  *param_2 = (int)pcVar1;
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
    *param_2 = *param_2 + 1;
  }
  return 0;
}


