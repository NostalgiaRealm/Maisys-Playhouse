
/* ==== FUN_12033c40 @ 12033c40 ==== 
 * signature: int __cdecl FUN_12033c40(char * param_1, int param_2)
 * body: 12033c40-12033c6b
 */

int __cdecl FUN_12033c40(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_12033c65;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_12033c65:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}


