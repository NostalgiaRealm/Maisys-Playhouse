
/* ==== FUN_00468630 @ 00468630 ==== 
 * signature: undefined __fastcall FUN_00468630(int * param_1)
 * body: 00468630-00468666
 */

void __fastcall FUN_00468630(int *param_1)

{
  char cVar1;
  
  if ((*(int *)((int)param_1 + 0x3a) != 0) && ((char)param_1[0x13] == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x260))();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)((int)param_1 + 0x3e) + 0x2f4))(6);
      return;
    }
    (**(code **)(**(int **)((int)param_1 + 0x3a) + 0x1fc))();
  }
  return;
}


