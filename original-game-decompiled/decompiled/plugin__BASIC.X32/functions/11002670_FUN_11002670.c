
/* ==== FUN_11002670 @ 11002670 ==== 
 * signature: undefined __cdecl FUN_11002670(short * param_1, short * param_2)
 * body: 11002670-110026c3
 */

void __cdecl FUN_11002670(short *param_1,short *param_2)

{
  char *pcVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  
  psVar3 = param_1;
  psVar4 = param_2;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
    psVar3 = psVar3 + 2;
    psVar4 = psVar4 + 2;
  }
  *psVar4 = *psVar3;
  if (*param_2 == 0x1c) {
    pcVar1 = FUN_11027da0(*(char **)(param_1 + 5));
    *(char **)(param_2 + 5) = pcVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  if (*param_2 == 0xd) {
    pcVar1 = FUN_11027da0(*(char **)(param_1 + 2));
    *(char **)(param_2 + 2) = pcVar1;
  }
  return;
}


