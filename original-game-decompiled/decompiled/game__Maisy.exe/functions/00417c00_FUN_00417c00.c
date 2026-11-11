
/* ==== FUN_00417c00 @ 00417c00 ==== 
 * signature: undefined __fastcall FUN_00417c00(int * param_1)
 * body: 00417c00-00417c32
 */

void __fastcall FUN_00417c00(int *param_1)

{
  if (*(int *)((int)param_1 + 0x166) != 0) {
    FUN_00436690(DAT_004dae3c,*(int *)((int)param_1 + 0x166),
                 (ushort)*(undefined4 *)((int)param_1 + 0x162));
  }
  *(undefined4 *)((int)param_1 + 0x166) = 0;
  FUN_0041d330(param_1);
  return;
}


