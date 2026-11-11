
/* ==== FUN_0042c290 @ 0042c290 ==== 
 * signature: undefined __fastcall FUN_0042c290(int * param_1)
 * body: 0042c290-0042c2f3
 */

void __fastcall FUN_0042c290(int *param_1)

{
  int *piVar1;
  undefined4 local_8;
  
  if ((*(int *)((int)param_1 + 0x3a) != 0) && (param_1[0x13] != 0)) {
    local_8 = 0;
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)param_1 + 0x46),param_1[0x13],8,&local_8,4);
  }
  for (piVar1 = (int *)(**(code **)(*param_1 + 0x188))(); piVar1 != (int *)0x0;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x174))()) {
    FUN_0042c290(piVar1);
  }
  return;
}


