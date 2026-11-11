
/* ==== FUN_1100ae50 @ 1100ae50 ==== 
 * signature: undefined __cdecl FUN_1100ae50(int param_1, int param_2)
 * body: 1100ae50-1100aeac
 */

void __cdecl FUN_1100ae50(int param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  FUN_11002670((short *)(param_1 + 0x20),(short *)(param_2 + 0x24));
  FUN_11002670((short *)(param_1 + 0x4e),(short *)(param_2 + 0x52));
  pcVar1 = FUN_11027da0(*(char **)(param_1 + 0x7c));
  *(char **)(param_2 + 0x80) = pcVar1;
  return;
}


