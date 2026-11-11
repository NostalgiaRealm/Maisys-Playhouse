
/* ==== FUN_0043e0a0 @ 0043e0a0 ==== 
 * signature: undefined4 __cdecl FUN_0043e0a0(short param_1, char * param_2, int param_3)
 * body: 0043e0a0-0043e13e
 */

undefined4 __cdecl FUN_0043e0a0(short param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  char *pcVar6;
  
  sVar4 = 0;
  iVar3 = -1;
  pcVar6 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  sVar5 = 0;
  sVar2 = ~(ushort)iVar3 - 1;
  if (0 < sVar2) {
    do {
      if (param_1 == 0) {
        if (param_2[sVar5] == ':') {
          if ((sVar5 < sVar2) && (param_2[sVar5 + -1] == ':')) {
            *(undefined1 *)(sVar4 + param_3) = 0x2e;
            sVar2 = sVar4 + 2;
            *(undefined1 *)((short)(sVar4 + 1) + param_3) = 0x2e;
            sVar4 = sVar4 + 3;
            *(undefined1 *)(sVar2 + param_3) = 0x5c;
          }
          break;
        }
        iVar3 = (int)sVar4;
        sVar4 = sVar4 + 1;
        *(char *)(iVar3 + param_3) = param_2[sVar5];
      }
      else if (param_2[sVar5] == ':') {
        param_1 = param_1 + -1;
      }
      sVar5 = sVar5 + 1;
    } while (sVar5 < sVar2);
  }
  *(undefined1 *)(sVar4 + param_3) = 0;
  return CONCAT31((int3)(char)((ushort)sVar4 >> 8),'\x01' - (sVar4 == 0));
}


