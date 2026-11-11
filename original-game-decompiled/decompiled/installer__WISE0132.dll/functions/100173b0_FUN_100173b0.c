
/* ==== FUN_100173b0 @ 100173b0 ==== 
 * signature: undefined __cdecl FUN_100173b0(undefined * * param_1)
 * body: 100173b0-1001740a
 */

void __cdecl FUN_100173b0(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_100221d0 == param_1) {
    PTR_LOOP_100221d0 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_100201b0) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1002532c,0,param_1);
    return;
  }
  DAT_100201c0 = 0xffffffff;
  return;
}


