
/* ==== FUN_004405e0 @ 004405e0 ==== 
 * signature: undefined __fastcall FUN_004405e0(void * param_1)
 * body: 004405e0-0044060d
 */

void __fastcall FUN_004405e0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_004404b0((int)param_1);
  while (piVar1 = piVar2, piVar1 != (int *)0x0) {
    piVar2 = *(int **)((int)piVar1 + 0x12);
    if (*(char *)((int)piVar1 + 0x11) != '\0') {
      FUN_00440580(param_1,*piVar1);
    }
  }
  return;
}


