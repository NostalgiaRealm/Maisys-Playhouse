
/* ==== FUN_00449210 @ 00449210 ==== 
 * signature: undefined __fastcall FUN_00449210(int * param_1)
 * body: 00449210-00449255
 */

void __fastcall FUN_00449210(int *param_1)

{
  if (*(HGLOBAL *)((int)param_1 + 0x152) != (HGLOBAL)0x0) {
    FUN_0043f7a0(*(HGLOBAL *)((int)param_1 + 0x152));
    *(undefined4 *)((int)param_1 + 0x152) = 0;
  }
  if (*(HGLOBAL *)((int)param_1 + 0x156) != (HGLOBAL)0x0) {
    FUN_0043f7a0(*(HGLOBAL *)((int)param_1 + 0x156));
    *(undefined4 *)((int)param_1 + 0x156) = 0;
  }
  FUN_0041d330(param_1);
  return;
}


