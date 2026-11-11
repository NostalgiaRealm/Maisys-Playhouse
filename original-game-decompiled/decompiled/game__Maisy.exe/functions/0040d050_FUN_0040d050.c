
/* ==== FUN_0040d050 @ 0040d050 ==== 
 * signature: undefined __fastcall FUN_0040d050(int * param_1)
 * body: 0040d050-0040d07e
 */

void __fastcall FUN_0040d050(int *param_1)

{
  *(uint *)((int)param_1 + 0x2a) = *(uint *)((int)param_1 + 0x2a) & 0x7fffffff;
  FUN_0040da60((int)param_1);
  if (*(LPVOID *)((int)param_1 + 0x5a) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)param_1 + 0x5a));
  }
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  FUN_00412db0(param_1);
  return;
}


