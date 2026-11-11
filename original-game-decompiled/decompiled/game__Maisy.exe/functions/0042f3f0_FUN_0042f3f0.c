
/* ==== FUN_0042f3f0 @ 0042f3f0 ==== 
 * signature: undefined4 __cdecl FUN_0042f3f0(undefined4 param_1, char * param_2, char * param_3)
 * body: 0042f3f0-0042f41d
 */

undefined4 __cdecl FUN_0042f3f0(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar2 = 0xffffffff;
  do {
    pcVar4 = param_3;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4 = param_3 + 1;
    cVar1 = *param_3;
    param_3 = pcVar4;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


