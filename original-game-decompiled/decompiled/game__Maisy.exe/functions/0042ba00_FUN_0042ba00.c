
/* ==== FUN_0042ba00 @ 0042ba00 ==== 
 * signature: undefined4 __cdecl FUN_0042ba00(short param_1, char * param_2, int param_3)
 * body: 0042ba00-0042ba7f
 */

undefined4 __cdecl FUN_0042ba00(short param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  char *pcVar5;
  short local_6;
  
  sVar4 = 0;
  local_6 = 0;
  iVar3 = -1;
  pcVar5 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  sVar2 = ~(ushort)iVar3 - 1;
  if (0 < sVar2) {
    do {
      if (param_1 == 0) {
        iVar3 = (int)local_6;
        local_6 = local_6 + 1;
        *(char *)(iVar3 + param_3) = param_2[sVar4];
        cVar1 = param_2[sVar4];
        if ((cVar1 == '>') || (cVar1 == ':')) break;
      }
      else if ((param_2[sVar4] == '>') || (param_2[sVar4] == ':')) {
        param_1 = param_1 + -1;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < sVar2);
  }
  *(undefined1 *)(local_6 + param_3) = 0;
  return CONCAT31((int3)(char)((ushort)local_6 >> 8),'\x01' - (local_6 == 0));
}


