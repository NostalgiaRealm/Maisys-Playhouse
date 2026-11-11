
/* ==== FUN_004479d0 @ 004479d0 ==== 
 * signature: undefined __fastcall FUN_004479d0(int * param_1)
 * body: 004479d0-004479f5
 */

void __fastcall FUN_004479d0(int *param_1)

{
  FUN_00462ca0(param_1);
  *(undefined2 *)((int)param_1 + 0x152) = 0;
  if ((*(byte *)(param_1 + 0x27) & 2) != 0) {
    (**(code **)(*param_1 + 0x470))();
  }
  return;
}


