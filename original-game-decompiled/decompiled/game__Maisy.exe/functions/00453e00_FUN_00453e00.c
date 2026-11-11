
/* ==== FUN_00453e00 @ 00453e00 ==== 
 * signature: uint __cdecl FUN_00453e00(int param_1, uint * param_2, uint * param_3, char * param_4)
 * body: 00453e00-00453e97
 */

uint __cdecl FUN_00453e00(int param_1,uint *param_2,uint *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = *param_2;
  if ((int)*param_3 <= (int)uVar3) {
    return uVar3 & 0xffffff00;
  }
  pcVar2 = _strstr((char *)(uVar3 + param_1),&DAT_004dbc74);
  if (pcVar2 != (char *)0x0) {
    _strncpy(param_4,(char *)(*param_2 + param_1),(size_t)(pcVar2 + (-*param_2 - param_1)));
    uVar3 = *param_2;
    param_4[(int)(pcVar2 + (-param_1 - uVar3))] = '\0';
    *param_2 = (uint)(pcVar2 + (3 - param_1));
    return CONCAT31((int3)((uint)(pcVar2 + (-param_1 - uVar3)) >> 8),1);
  }
  uVar3 = 0xffffffff;
  pcVar2 = (char *)(*param_2 + param_1);
  do {
    pcVar5 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_4 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    param_4 = param_4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_4 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    param_4 = param_4 + 1;
  }
  uVar3 = *param_3;
  *param_2 = uVar3;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


