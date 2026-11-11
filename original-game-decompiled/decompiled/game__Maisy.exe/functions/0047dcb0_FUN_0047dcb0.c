
/* ==== FUN_0047dcb0 @ 0047dcb0 ==== 
 * signature: undefined __fastcall FUN_0047dcb0(int * param_1)
 * body: 0047dcb0-0047dcd4
 */

void __fastcall FUN_0047dcb0(int *param_1)

{
  if ((int *)param_1[0x5a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5a] + 4))();
    param_1[0x5a] = 0;
  }
  FUN_004603a0(param_1);
  return;
}


