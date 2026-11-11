
/* ==== FUN_11033230 @ 11033230 ==== 
 * signature: int __cdecl FUN_11033230(char * param_1, int param_2)
 * body: 11033230-1103325b
 */

int __cdecl FUN_11033230(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_11033255;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_11033255:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}


