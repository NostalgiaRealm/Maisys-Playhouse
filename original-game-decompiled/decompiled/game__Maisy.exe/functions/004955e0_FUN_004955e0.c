
/* ==== FUN_004955e0 @ 004955e0 ==== 
 * signature: int __cdecl FUN_004955e0(char * param_1, int param_2)
 * body: 004955e0-0049560b
 */

int __cdecl FUN_004955e0(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (*pcVar2 == '\0') goto LAB_00495605;
    pcVar2 = pcVar2 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_00495605:
    param_2 = (int)pcVar2 - (int)param_1;
  }
  return param_2;
}


