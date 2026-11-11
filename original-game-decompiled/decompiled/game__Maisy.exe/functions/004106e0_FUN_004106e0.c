
/* ==== FUN_004106e0 @ 004106e0 ==== 
 * signature: undefined4 __fastcall FUN_004106e0(int param_1)
 * body: 004106e0-004106ed
 */

undefined4 __fastcall FUN_004106e0(int param_1)

{
  if (*(int *)(param_1 + 0x2a) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x2a) + 0x1c);
}


