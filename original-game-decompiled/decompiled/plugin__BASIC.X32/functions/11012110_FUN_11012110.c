
/* ==== FUN_11012110 @ 11012110 ==== 
 * signature: undefined __cdecl FUN_11012110(int param_1, int param_2)
 * body: 11012110-11012168
 */

void __cdecl FUN_11012110(int param_1,int param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  FUN_11002670((short *)(param_1 + 0x20),(short *)(param_2 + 0x24));
  pcVar1 = FUN_11027da0(*(char **)(param_1 + 0x52));
  *(char **)(param_2 + 0x56) = pcVar1;
  pcVar1 = FUN_11027da0(*(char **)(param_1 + 0x4e));
  *(char **)(param_2 + 0x52) = pcVar1;
  return;
}


