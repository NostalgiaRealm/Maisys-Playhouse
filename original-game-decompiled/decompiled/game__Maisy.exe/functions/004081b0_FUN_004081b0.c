
/* ==== FUN_004081b0 @ 004081b0 ==== 
 * signature: undefined __fastcall FUN_004081b0(void * param_1)
 * body: 004081b0-00408232
 */

void __fastcall FUN_004081b0(void *param_1)

{
  int *piVar1;
  undefined4 local_58 [21];
  
  piVar1 = *(int **)((int)param_1 + 0x9e);
  if ((piVar1 != (int *)0x0) && (*(int **)((int)param_1 + 0x9a) != piVar1)) {
    (**(code **)(*piVar1 + 0x234))();
    FUN_004142c0(local_58,0x7d2,0,0,0);
    FUN_0046b730(*(void **)((int)param_1 + 0x9e),(int)local_58);
    *(undefined4 *)((int)param_1 + 0x9e) = 0;
    if (piVar1 != (int *)0x0) {
      FUN_00430640(*(int *)((int)param_1 + 0x5a));
      FUN_00402030((int)param_1);
      FUN_00405d20(param_1,piVar1);
      FUN_00430640(*(int *)((int)param_1 + 0x5a));
      FUN_0047dc10();
    }
  }
  return;
}


