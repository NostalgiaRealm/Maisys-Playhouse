
/* ==== FUN_0045d850 @ 0045d850 ==== 
 * signature: undefined4 __fastcall FUN_0045d850(int * param_1)
 * body: 0045d850-0045d8b6
 */

undefined4 __fastcall FUN_0045d850(int *param_1)

{
  int iVar1;
  int *this;
  undefined1 local_18 [14];
  undefined2 uStack_a;
  undefined2 local_8;
  undefined2 uStack_6;
  
  this = (int *)(**(code **)(*param_1 + 0x118))(1,1,1);
  if (this == (int *)0x0) {
    FUN_004a3538();
  }
  iVar1 = *this;
  (**(code **)(iVar1 + 0x134))(local_18);
  (**(code **)(iVar1 + 0x138))(local_18,0x14);
  FUN_00481bc0(this,(uint *)((int)param_1 + 0x42),CONCAT22(uStack_6,local_8));
  FUN_00481b90(this,(undefined2 *)(param_1 + 0xf),uStack_a);
  return 0;
}


