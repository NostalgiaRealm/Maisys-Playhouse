
/* ==== FUN_1100a970 @ 1100a970 ==== 
 * signature: uint __cdecl FUN_1100a970(undefined4 * param_1, int param_2, int param_3)
 * body: 1100a970-1100aa06
 */

uint __cdecl FUN_1100a970(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char local_200 [256];
  char local_100 [256];
  
  *(undefined4 *)(param_3 + 8) = 0x16;
  if ((*(byte *)(param_3 + 0xe) & 2) != 0) {
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),local_100);
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),local_200);
    uVar2 = 0xffffffff;
    pcVar4 = local_200;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    in_EAX = 0;
    uVar3 = 0xffffffff;
    pcVar4 = local_100;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + ~uVar3 + (~uVar2 - 2);
  }
  *(undefined2 *)(param_3 + 0xc) = 0;
  return in_EAX & 0xffffff00;
}


