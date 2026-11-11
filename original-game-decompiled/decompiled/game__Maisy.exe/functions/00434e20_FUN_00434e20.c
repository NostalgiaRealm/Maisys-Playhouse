
/* ==== FUN_00434e20 @ 00434e20 ==== 
 * signature: undefined __cdecl FUN_00434e20(int param_1, short param_2)
 * body: 00434e20-00434e76
 */

void __cdecl FUN_00434e20(int param_1,short param_2)

{
  int local_18 [5];
  
  FUN_0048b370((int)local_18,param_1);
  if (DAT_004e0210 != 0) {
    FUN_00434de0(DAT_004dae3c,local_18,*(LPVOID *)(param_2 * 4 + DAT_004e0210));
    *(undefined4 *)(param_2 * 4 + DAT_004e0210) = 0;
  }
  return;
}


