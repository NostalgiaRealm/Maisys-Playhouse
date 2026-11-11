
/* ==== FUN_11004240 @ 11004240 ==== 
 * signature: undefined __cdecl FUN_11004240(undefined4 * param_1, int param_2, undefined4 * param_3)
 * body: 11004240-11004272
 */

void __cdecl FUN_11004240(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0xc) = *param_3;
  *(undefined4 *)(param_2 + 0x10) = param_3[1];
  if (*(LPVOID *)(param_2 + 0x14) != (LPVOID)0x0) {
    FUN_11013d10(param_1,*(LPVOID *)(param_2 + 0x14));
  }
  *(undefined4 *)(param_2 + 0x14) = param_3[4];
  return;
}


