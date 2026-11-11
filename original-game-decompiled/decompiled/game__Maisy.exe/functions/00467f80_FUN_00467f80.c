
/* ==== FUN_00467f80 @ 00467f80 ==== 
 * signature: undefined4 __cdecl FUN_00467f80(int param_1, int param_2)
 * body: 00467f80-00467fb9
 */

undefined4 __cdecl FUN_00467f80(int param_1,int param_2)

{
  if (param_2 == 0) {
    return 0x20002;
  }
  if (param_1 == 0) {
    return 0x20002;
  }
  if (*(void **)(param_2 + 2) != (void *)0x0) {
    FUN_00414500(*(void **)(param_2 + 2),param_2 + 2);
    return 0;
  }
  return 0x10000;
}


