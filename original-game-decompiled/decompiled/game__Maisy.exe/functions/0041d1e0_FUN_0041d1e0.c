
/* ==== FUN_0041d1e0 @ 0041d1e0 ==== 
 * signature: undefined __fastcall FUN_0041d1e0(int * param_1)
 * body: 0041d1e0-0041d259
 */

void __fastcall FUN_0041d1e0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1[0x33] != 0) || (*(int *)((int)param_1 + 0x106) != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x15c))(0xe);
    if (cVar1 != '\0') {
      if (*(LPVOID *)((int)param_1 + 0x106) != (LPVOID)0x0) {
        FUN_00434950(*(LPVOID *)((int)param_1 + 0x106));
        *(undefined4 *)((int)param_1 + 0x106) = 0;
      }
      uVar2 = FUN_00434920(DAT_004d99ac,0x400,0);
      *(undefined4 *)((int)param_1 + 0x106) = uVar2;
      FUN_0040e0e0(param_1,param_1[0x32]);
      FUN_0040e180(param_1,*(HPSTR *)((int)param_1 + 0x106),0x400);
    }
  }
  return;
}


