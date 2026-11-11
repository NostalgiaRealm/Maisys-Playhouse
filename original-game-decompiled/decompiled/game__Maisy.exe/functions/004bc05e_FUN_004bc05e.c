
/* ==== FUN_004bc05e @ 004bc05e ==== 
 * signature: undefined4 __fastcall FUN_004bc05e(int * param_1)
 * body: 004bc05e-004bc07d
 */

undefined4 __fastcall FUN_004bc05e(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (DAT_004e5104 == (void *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004bbb38(DAT_004e5104,*param_1);
  }
  return uVar1;
}


