
/* ==== FUN_110233c0 @ 110233c0 ==== 
 * signature: undefined __cdecl FUN_110233c0(undefined4 * param_1, int param_2, short * param_3)
 * body: 110233c0-1102343d
 */

void __cdecl FUN_110233c0(undefined4 *param_1,int param_2,short *param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  sVar2 = *param_3;
  if (sVar2 != 0xd) {
    if (sVar2 != 0x10) {
      if (sVar2 != 0x17) {
        *param_3 = 0;
        return;
      }
      *param_3 = 0x10;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  pcVar3 = *(char **)(param_3 + 2);
  FUN_11020c90(param_1,(int)*(short *)(param_2 + 0x10),pcVar3);
  iVar4 = -1;
  pcVar5 = pcVar3;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar3[(short)(~(ushort)iVar4 - 1)] = ',';
  FUN_11020c90(param_1,(int)*(short *)(param_2 + 0x12),pcVar3 + (short)(~(ushort)iVar4 - 1) + 1);
  return;
}


