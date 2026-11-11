
/* ==== FUN_004060e0 @ 004060e0 ==== 
 * signature: undefined __fastcall FUN_004060e0(int param_1)
 * body: 004060e0-00406112
 */

void __fastcall FUN_004060e0(int param_1)

{
  int *piVar1;
  short sVar2;
  
  sVar2 = 1;
  if (0 < *(short *)(*(int *)(param_1 + 0x6a) + 0xc)) {
    do {
      piVar1 = (int *)FUN_004308b0(*(void **)(param_1 + 0x6a),sVar2);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x7c))();
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 <= *(short *)(*(int *)(param_1 + 0x6a) + 0xc));
  }
  return;
}


