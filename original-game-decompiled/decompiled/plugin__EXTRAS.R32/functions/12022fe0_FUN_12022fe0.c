
/* ==== FUN_12022fe0 @ 12022fe0 ==== 
 * signature: undefined4 __cdecl FUN_12022fe0(int param_1)
 * body: 12022fe0-12023007
 */

undefined4 __cdecl FUN_12022fe0(int param_1)

{
  if ((*(short *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x10) != 0)) {
    FUN_120232f0(param_1,*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}


