
/* ==== FUN_1000d770 @ 1000d770 ==== 
 * signature: undefined __cdecl FUN_1000d770(undefined * * param_1)
 * body: 1000d770-1000d7ca
 */

void __cdecl FUN_1000d770(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10016380 == param_1) {
    PTR_LOOP_10016380 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10014360) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_100183e4,0,param_1);
    return;
  }
  DAT_10014370 = 0xffffffff;
  return;
}


