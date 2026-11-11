
/* ==== FUN_00447a20 @ 00447a20 ==== 
 * signature: undefined __fastcall FUN_00447a20(int * param_1)
 * body: 00447a20-00447a69
 */

void __fastcall FUN_00447a20(int *param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    FUN_00463e30(param_1);
    if (*(HGLOBAL *)((int)param_1 + 0x14a) != (HGLOBAL)0x0) {
      FUN_0043f7a0(*(HGLOBAL *)((int)param_1 + 0x14a));
      *(undefined4 *)((int)param_1 + 0x14a) = 0;
    }
    if (*(HGLOBAL *)((int)param_1 + 0x14e) != (HGLOBAL)0x0) {
      FUN_0043f7a0(*(HGLOBAL *)((int)param_1 + 0x14e));
      *(undefined4 *)((int)param_1 + 0x14e) = 0;
    }
  }
  return;
}


