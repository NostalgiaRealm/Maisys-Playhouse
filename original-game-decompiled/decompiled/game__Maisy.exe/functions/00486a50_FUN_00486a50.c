
/* ==== FUN_00486a50 @ 00486a50 ==== 
 * signature: undefined __cdecl FUN_00486a50(int * param_1, int * param_2, undefined4 * param_3)
 * body: 00486a50-00486a7a
 */

void __cdecl FUN_00486a50(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  if (*(short *)((int)param_1 + 0x22) == 0x40) {
    piVar1 = FUN_0043da70(param_2,param_1,'\x01',(short *)0x0,'\x01');
    *param_3 = piVar1;
    return;
  }
  if (*(short *)((int)param_1 + 0x22) == 0x43) {
    piVar1 = FUN_0043d880(param_2,param_1,'\x01',1,(short *)0x0,'\x01');
    *param_3 = piVar1;
  }
  return;
}


