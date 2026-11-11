
/* ==== FUN_00427d20 @ 00427d20 ==== 
 * signature: undefined __fastcall FUN_00427d20(int * param_1)
 * body: 00427d20-00427d45
 */

void __fastcall FUN_00427d20(int *param_1)

{
  if (*(LPVOID *)((int)param_1 + 0xd6) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)((int)param_1 + 0xd6));
    *(undefined4 *)((int)param_1 + 0xd6) = 0;
  }
  FUN_0040d050(param_1);
  return;
}


