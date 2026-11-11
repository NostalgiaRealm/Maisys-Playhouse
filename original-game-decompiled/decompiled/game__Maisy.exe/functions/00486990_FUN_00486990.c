
/* ==== FUN_00486990 @ 00486990 ==== 
 * signature: undefined __cdecl FUN_00486990(int param_1, int * param_2, undefined4 * param_3)
 * body: 00486990-004869f9
 */

void __cdecl FUN_00486990(int param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0046ca10(param_1);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0046cac0(0);
  }
  if (*(short *)((int)piVar1 + 0x22) == 0x3f) {
    piVar1 = FUN_0043d880(param_2,piVar1,'\x01',1,(short *)0x0,'\x01');
    *param_3 = piVar1;
    return;
  }
  if ((((short)piVar1[0x18] == 0) && ((*(byte *)((int)piVar1 + 0x21) & 0x40) == 0)) &&
     (*(short *)((int)piVar1 + 0x22) != 0x43)) {
    piVar1 = FUN_0043da70(param_2,piVar1,'\x01',(short *)0x0,'\x01');
    *param_3 = piVar1;
  }
  return;
}


