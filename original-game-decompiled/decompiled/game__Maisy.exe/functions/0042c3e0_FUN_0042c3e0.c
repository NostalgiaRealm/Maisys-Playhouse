
/* ==== FUN_0042c3e0 @ 0042c3e0 ==== 
 * signature: undefined __fastcall FUN_0042c3e0(int * param_1)
 * body: 0042c3e0-0042c44f
 */

void __fastcall FUN_0042c3e0(int *param_1)

{
  DAT_004dc594 = DAT_004dc594 + -1;
  (**(code **)(*param_1 + 0x238))();
  if (param_1[0x13] != 0) {
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)param_1 + 0x46),param_1[0x13],0xf,0,0);
  }
  if ((LPVOID)param_1[0x13] != (LPVOID)0x0) {
    FUN_004a602d((LPVOID)param_1[0x13]);
    param_1[0x13] = 0;
  }
  if ((*(void **)((int)param_1 + 0x42) != (void *)0x0) && (DAT_004dac64 == '\0')) {
    FUN_00423d80(*(void **)((int)param_1 + 0x42),param_1);
    FUN_0040afd0(param_1);
    return;
  }
  FUN_004123d0(param_1);
  return;
}


