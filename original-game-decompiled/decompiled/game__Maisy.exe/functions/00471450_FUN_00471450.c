
/* ==== FUN_00471450 @ 00471450 ==== 
 * signature: undefined4 __cdecl FUN_00471450(int param_1, int param_2)
 * body: 00471450-00471489
 */

undefined4 __cdecl FUN_00471450(int param_1,int param_2)

{
  void *this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)FUN_0048b560(0,param_1);
  this = (void *)*puVar1;
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    piVar2 = (int *)*puVar1;
  }
  FUN_00463090(this,piVar2);
  return 0;
}


