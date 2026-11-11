
/* ==== FUN_0046ea70 @ 0046ea70 ==== 
 * signature: uint __cdecl FUN_0046ea70(char * param_1)
 * body: 0046ea70-0046eac3
 */

uint __cdecl FUN_0046ea70(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  short sVar4;
  
  iVar3 = -1;
  pcVar2 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  sVar4 = 1;
  iVar3 = (int)(short)(~(ushort)iVar3 - 1);
  do {
    pcVar2 = param_1 + -(int)sVar4;
    if (pcVar2[iVar3] == '.') break;
    sVar4 = sVar4 + 1;
  } while (sVar4 < 5);
  if ((sVar4 == 4) && (pcVar2 = param_1 + iVar3 + -4, *pcVar2 == '.')) {
    *pcVar2 = '\0';
    return CONCAT31((int3)((uint)pcVar2 >> 8),1);
  }
  return (uint)pcVar2 & 0xffffff00;
}


