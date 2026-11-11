
/* ==== FUN_004603a0 @ 004603a0 ==== 
 * signature: undefined __fastcall FUN_004603a0(int * param_1)
 * body: 004603a0-004603f8
 */

void __fastcall FUN_004603a0(int *param_1)

{
  if (*(void **)((int)param_1 + 0x3a) != (void *)0x0) {
    FUN_00406bb0(*(void **)((int)param_1 + 0x3a),1,param_1,(undefined4 *)0x0);
  }
  if (param_1[0x47] != 0) {
    FUN_0047bce0((char *)(param_1[0x47] + 2));
    FUN_004a602d((LPVOID)param_1[0x47]);
    param_1[0x47] = 0;
  }
  (**(code **)(*param_1 + 0x340))();
  FUN_004697f0(param_1);
  return;
}


