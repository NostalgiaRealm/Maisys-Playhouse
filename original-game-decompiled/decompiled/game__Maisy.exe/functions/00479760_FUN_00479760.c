
/* ==== FUN_00479760 @ 00479760 ==== 
 * signature: undefined __fastcall FUN_00479760(int * param_1)
 * body: 00479760-00479793
 */

void __fastcall FUN_00479760(int *param_1)

{
  if (*(undefined4 **)((int)param_1 + 0x2e) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2e))(1);
    *(undefined4 *)((int)param_1 + 0x2e) = 0;
  }
  if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)param_1 + 0x2a))(1);
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  FUN_00412db0(param_1);
  return;
}


