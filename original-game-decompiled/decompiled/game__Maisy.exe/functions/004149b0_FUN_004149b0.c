
/* ==== FUN_004149b0 @ 004149b0 ==== 
 * signature: uint __stdcall FUN_004149b0(undefined4 param_1, int param_2)
 * body: 004149b0-004149d6
 */

uint FUN_004149b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  return (*(int *)(param_2 + 0x10) == 0) - 1 & 0xfffffffe;
}


