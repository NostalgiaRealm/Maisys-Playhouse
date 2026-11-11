
/* ==== FUN_0043fc00 @ 0043fc00 ==== 
 * signature: undefined __fastcall FUN_0043fc00(void * param_1)
 * body: 0043fc00-0043fc62
 */

void __fastcall FUN_0043fc00(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0043f900((int)param_1);
  if (iVar1 != 0) {
    FUN_0043f900((int)param_1);
    FUN_0048d0f5();
    FUN_0043f910(param_1,0,0);
  }
  if (*(int **)((int)param_1 + 0xc4) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xc4) + 0x5c))();
    if (*(int **)((int)param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0xc4) + 4))(1);
    }
    *(undefined4 *)((int)param_1 + 0xc4) = 0;
  }
  FUN_00440650(param_1,'\0');
  FUN_004405e0(param_1);
  return;
}


