
/* ==== FUN_11026d80 @ 11026d80 ==== 
 * signature: uint __cdecl FUN_11026d80(undefined4 * param_1, int param_2, int param_3)
 * body: 11026d80-11026e31
 */

uint __cdecl FUN_11026d80(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_200 [256];
  char local_100 [256];
  
  uVar3 = *(uint *)(param_3 + 0xe);
  uVar2 = (int)uVar3 >> 0x18;
  cVar1 = (char)(uVar3 >> 0x18);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_3 + 8) = 0x1c;
  }
  else if (cVar1 == '\x01') {
    *(undefined4 *)(param_3 + 8) = 0x1e;
  }
  if ((uVar3 & 2) != 0) {
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),local_100);
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),local_200);
    uVar3 = 0xffffffff;
    pcVar5 = local_200;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = 0;
    uVar4 = 0xffffffff;
    pcVar5 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + ~uVar4 + (~uVar3 - 2);
  }
  *(undefined2 *)(param_3 + 0xc) = 0;
  return uVar2 & 0xffffff00;
}


