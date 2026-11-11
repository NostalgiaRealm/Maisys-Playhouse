
/* ==== FUN_1401abf0 @ 1401abf0 ==== 
 * signature: int __cdecl FUN_1401abf0(char * param_1, int param_2)
 * body: 1401abf0-1401ac1b
 */

int __cdecl FUN_1401abf0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_1401ac15;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_1401ac15:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}


