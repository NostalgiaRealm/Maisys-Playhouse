
/* ==== FUN_0040c260 @ 0040c260 ==== 
 * signature: undefined __cdecl FUN_0040c260(undefined * * param_1)
 * body: 0040c260-0040c2ba
 */

void __cdecl FUN_0040c260(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_004131f0 == param_1) {
    PTR_LOOP_004131f0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_004111d0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_00413ce4,0,param_1);
    return;
  }
  DAT_004111e0 = 0xffffffff;
  return;
}


