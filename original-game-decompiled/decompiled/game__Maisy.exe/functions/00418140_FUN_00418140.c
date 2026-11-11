
/* ==== FUN_00418140 @ 00418140 ==== 
 * signature: undefined __fastcall FUN_00418140(int * param_1)
 * body: 00418140-00418188
 */

void __fastcall FUN_00418140(int *param_1)

{
  undefined1 local_c [8];
  
  if (*(int *)((int)param_1 + 0x4a) != 0) {
    FUN_00418560(local_c,param_1);
    (**(code **)(**(int **)((int)param_1 + 0x4a) + 0xf0))(local_c,0);
    if (*(undefined4 **)((int)param_1 + 0x4a) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)param_1 + 0x4a))(1);
    }
    *(undefined4 *)((int)param_1 + 0x4a) = 0;
  }
  FUN_0042fbc0(param_1);
  return;
}


