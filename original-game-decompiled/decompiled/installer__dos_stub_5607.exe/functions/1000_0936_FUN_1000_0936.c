
/* ==== FUN_1000_0936 @ 1000:0936 ==== 
 * signature: undefined __cdecl16near FUN_1000_0936(void)
 * body: 1000:0936-1000:0987
 */

char * __cdecl16near FUN_1000_0936(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  char *local_4;
  
  for (; pcVar1 = param_1, *param_1 == ';'; param_1 = param_1 + 1) {
  }
  while (param_3 = param_3 + -1, local_4 = pcVar1, param_3 != 0) {
    if ((*pcVar1 == '\0') || (*pcVar1 == ';')) goto LAB_1000_096f;
    *param_2 = *pcVar1;
    param_2 = param_2 + 1;
    pcVar1 = pcVar1 + 1;
  }
LAB_1000_0974:
  *param_2 = '\0';
  if (local_4 == pcVar1) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
LAB_1000_096f:
  for (; local_4 = param_1, *pcVar1 == ';'; pcVar1 = pcVar1 + 1) {
  }
  goto LAB_1000_0974;
}


