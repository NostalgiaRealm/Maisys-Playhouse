
/* ==== FUN_004097b1 @ 004097b1 ==== 
 * signature: char * __cdecl FUN_004097b1(LPCSTR param_1)
 * body: 004097b1-004097d2
 */

char * __cdecl FUN_004097b1(LPCSTR param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = lstrlenA(param_1);
  for (pcVar2 = param_1 + iVar1; param_1 < pcVar2; pcVar2 = pcVar2 + -1) {
    if (*pcVar2 == '\\') goto LAB_004097d0;
  }
  if (*pcVar2 == '\\') {
LAB_004097d0:
    pcVar2 = pcVar2 + 1;
  }
  return pcVar2;
}


