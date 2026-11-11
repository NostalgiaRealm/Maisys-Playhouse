
/* ==== FUN_11028020 @ 11028020 ==== 
 * signature: undefined __cdecl FUN_11028020(int param_1, undefined4 * param_2)
 * body: 11028020-1102807b
 */

void __cdecl FUN_11028020(int param_1,undefined4 *param_2)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = *(undefined4 *)(param_1 + 0x10);
  param_2[0x19] = *(undefined4 *)(param_1 + 0x14);
  psVar2 = (short *)(param_1 + 0x18);
  psVar3 = (short *)(param_2 + 2);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = *(undefined4 *)psVar2;
    psVar2 = psVar2 + 2;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = *psVar2;
  psVar2 = (short *)(param_1 + 0x46);
  psVar3 = (short *)((int)param_2 + 0x36);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = *(undefined4 *)psVar2;
    psVar2 = psVar2 + 2;
    psVar3 = psVar3 + 2;
  }
  *psVar3 = *psVar2;
  FUN_11002670((short *)(param_1 + 0x18),(short *)(param_2 + 2));
  FUN_11002670((short *)(param_1 + 0x46),(short *)((int)param_2 + 0x36));
  return;
}


