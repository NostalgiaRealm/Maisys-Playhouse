
/* ==== FUN_0046e9f0 @ 0046e9f0 ==== 
 * signature: int __cdecl FUN_0046e9f0(char * param_1, char * param_2)
 * body: 0046e9f0-0046ea64
 */

int __cdecl FUN_0046e9f0(char *param_1,char *param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  short sVar7;
  char *pcVar8;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  sVar7 = 1;
  sVar2 = ~(ushort)iVar3 - 1;
  do {
    if (param_1[(int)sVar2 - (int)sVar7] == '.') break;
    sVar7 = sVar7 + 1;
  } while (sVar7 < 5);
  if (sVar7 < 5) {
    return (uint)(uint3)(int3)(char)((ushort)sVar2 >> 8) << 8;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar3 = -1;
  do {
    pcVar8 = param_1;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -uVar4;
  pcVar8 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return 1;
}


