
/* ==== FUN_0046d0d0 @ 0046d0d0 ==== 
 * signature: undefined __cdecl FUN_0046d0d0(char param_1, short param_2, int param_3, int param_4, int * param_5)
 * body: 0046d0d0-0046d155
 */

void __cdecl FUN_0046d0d0(char param_1,short param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  char *pcVar4;
  short sVar5;
  int iVar6;
  
  bVar2 = false;
  sVar5 = 0;
  for (sVar3 = 0;
      ((cVar1 = *(char *)(sVar3 + param_3), param_1 != cVar1 || (bVar2)) && (sVar3 <= param_2));
      sVar3 = sVar3 + 1) {
    if (cVar1 == '\"') {
      bVar2 = !bVar2;
    }
    iVar6 = (int)sVar5;
    sVar5 = sVar5 + 1;
    *(char *)(iVar6 + param_4) = cVar1;
  }
  if (param_2 < sVar5) {
    sVar5 = param_2;
  }
  pcVar4 = (char *)(param_3 + sVar5);
  if (*pcVar4 == '\0') {
    if (*param_5 != 0) {
      *param_5 = 0;
    }
  }
  else if ((*param_5 != 0) && (*param_5 = (int)(pcVar4 + 1), pcVar4[1] == param_1)) {
    *param_5 = (int)(pcVar4 + 2);
  }
  *(undefined1 *)(sVar5 + param_4) = 0;
  return;
}


