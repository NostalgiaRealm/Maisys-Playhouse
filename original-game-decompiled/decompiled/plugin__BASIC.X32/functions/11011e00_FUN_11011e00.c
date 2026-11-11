
/* ==== FUN_11011e00 @ 11011e00 ==== 
 * signature: undefined __cdecl FUN_11011e00(undefined4 * param_1, int param_2, short * param_3)
 * body: 11011e00-11011eb2
 */

void __cdecl FUN_11011e00(undefined4 *param_1,int param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  
  sVar2 = *param_3;
  if (sVar2 != 0xd) {
    if (sVar2 != 0x11) {
      if (sVar2 != 0x17) {
        *param_3 = 0;
        return;
      }
      *param_3 = 0x11;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_2 + 0x14);
    return;
  }
  pcVar3 = *(char **)(param_3 + 2);
  FUN_11020c90(param_1,*(undefined4 *)(param_2 + 0x10),pcVar3);
  iVar5 = -1;
  pcVar6 = pcVar3;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~(ushort)iVar5;
  pcVar3[(short)(uVar4 - 1)] = ' ';
  pcVar3[(short)uVar4] = 't';
  pcVar3[(short)(uVar4 + 1)] = 'h';
  pcVar3[(short)(uVar4 + 2)] = 'r';
  pcVar3[(short)(uVar4 + 3)] = 'u';
  pcVar3[(short)(uVar4 + 4)] = ' ';
  FUN_11020c90(param_1,*(undefined4 *)(param_2 + 0x14),pcVar3 + (short)(uVar4 + 4) + 1);
  return;
}


