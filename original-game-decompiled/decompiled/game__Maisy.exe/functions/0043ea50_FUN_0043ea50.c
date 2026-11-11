
/* ==== FUN_0043ea50 @ 0043ea50 ==== 
 * signature: int * __cdecl FUN_0043ea50(int * param_1, int * param_2, char * param_3)
 * body: 0043ea50-0043ead4
 */

int * __cdecl FUN_0043ea50(int *param_1,int *param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  char local_108 [256];
  int *local_8;
  
  local_8 = (int *)0x0;
  piVar1 = (int *)FUN_0043e950(param_1,*param_2);
  if ((piVar1 != (int *)0x0) &&
     ((local_8 = piVar1, (**(code **)(*piVar1 + 0x70))(local_108), param_3 == (char *)0x0 ||
      (((*(byte *)((int)piVar1 + 0x29) & 0x80) == 0 &&
       (uVar2 = FUN_0043d430(local_108,param_3), uVar2 == 0)))))) {
    return piVar1;
  }
  piVar1 = FUN_0043e9b0(param_1,param_2,param_3);
  if (piVar1 == (int *)0x0) {
    piVar1 = local_8;
  }
  return piVar1;
}


