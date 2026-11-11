
/* ==== FUN_00486840 @ 00486840 ==== 
 * signature: undefined __cdecl FUN_00486840(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00486840-004868be
 */

void __cdecl FUN_00486840(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (((((param_1 != (int *)0x0) && ((*(uint *)((int)param_1 + 0x1e) & 2) != 0)) &&
       ((*(uint *)((int)param_1 + 0x1e) & 0x40000000) == 0)) &&
      ((*(short *)((int)param_1 + 0x22) != 0x43 && ((*(uint *)((int)param_2 + 0x1e) & 2) != 0)))) &&
     (((*(uint *)((int)param_2 + 0x1e) & 0x40000000) == 0 &&
      (((short)param_2[0x18] != 0 || (*(short *)((int)param_2 + 0x22) == 0x43)))))) {
    if (((short)param_1[0x18] == 0) && (*(short *)((int)param_1 + 0x22) != 0x43)) {
      piVar1 = FUN_0043d880(param_2,param_1,'\x01',1,(short *)0x0,'\x01');
      *param_3 = piVar1;
      return;
    }
    piVar1 = FUN_0043da70(param_2,param_1,'\x01',(short *)0x0,'\x01');
    *param_3 = piVar1;
  }
  return;
}


