
/* ==== FUN_11005090 @ 11005090 ==== 
 * signature: uint __cdecl FUN_11005090(undefined4 * param_1, int param_2, int param_3)
 * body: 11005090-11005159
 */

uint __cdecl FUN_11005090(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_300 [256];
  char local_200 [256];
  char local_100 [256];
  
  *(undefined4 *)(param_3 + 8) = 0x24;
  if ((*(byte *)(param_3 + 0xe) & 2) != 0) {
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),local_300);
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),local_100);
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),local_200);
    uVar2 = 0xffffffff;
    pcVar5 = local_300;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    pcVar5 = local_200;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar5 = local_100;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    in_EAX = ~uVar4 + ~uVar3 + (~uVar2 - 3);
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + in_EAX;
  }
  *(undefined2 *)(param_3 + 0xc) = 0;
  return in_EAX & 0xffffff00;
}


