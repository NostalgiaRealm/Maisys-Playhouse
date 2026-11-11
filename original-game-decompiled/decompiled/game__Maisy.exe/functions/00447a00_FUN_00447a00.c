
/* ==== FUN_00447a00 @ 00447a00 ==== 
 * signature: undefined __fastcall FUN_00447a00(int * param_1)
 * body: 00447a00-00447a1b
 */

void __fastcall FUN_00447a00(int *param_1)

{
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfe;
    *(undefined2 *)((int)param_1 + 0x152) = 0;
    FUN_00463e20(param_1);
    return;
  }
  return;
}


