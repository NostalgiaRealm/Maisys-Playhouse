
/* ==== FUN_11027ac0 @ 11027ac0 ==== 
 * signature: uint __cdecl FUN_11027ac0(undefined4 * param_1, int param_2, int param_3)
 * body: 11027ac0-11027b23
 */

uint __cdecl FUN_11027ac0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar3;
  char local_100 [256];
  
  *(undefined4 *)(param_3 + 8) = 10;
  if ((*(byte *)(param_3 + 0xe) & 2) != 0) {
    FUN_11004670(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),local_100);
    uVar2 = 0xffffffff;
    in_EAX = 0;
    pcVar3 = local_100;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (~uVar2 - 1);
  }
  *(undefined2 *)(param_3 + 0xc) = 1;
  return in_EAX & 0xffffff00;
}


