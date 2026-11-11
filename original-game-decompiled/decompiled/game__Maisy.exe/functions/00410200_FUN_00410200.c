
/* ==== FUN_00410200 @ 00410200 ==== 
 * signature: undefined __fastcall FUN_00410200(int param_1)
 * body: 00410200-00410218
 */

void __fastcall FUN_00410200(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x36) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x36))(1);
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  return;
}


