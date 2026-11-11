
/* ==== FUN_00431030 @ 00431030 ==== 
 * signature: char __fastcall FUN_00431030(int * param_1)
 * body: 00431030-0043104a
 */

char __fastcall FUN_00431030(int *param_1)

{
  (**(code **)(*param_1 + 0x114))();
  return '\x01' - (*(short *)((int)param_1 + 0xde) == 0);
}


