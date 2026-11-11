
/* ==== FUN_00484360 @ 00484360 ==== 
 * signature: undefined4 __cdecl FUN_00484360(undefined4 param_1, int * param_2, int param_3, char param_4, char param_5)
 * body: 00484360-0048443c
 */

undefined4 __cdecl
FUN_00484360(undefined4 param_1,int *param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)FUN_0048b550(*param_2);
  piVar2 = (int *)FUN_0048b550(param_3);
  if ((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    return 0x90001;
  }
  if ((*(uint *)((int)piVar1 + 0x1e) & 2) != 0) {
    if ((*(byte *)((int)piVar2 + 0x1e) & 2) == 0) {
      return 0x9000a;
    }
    if (param_4 != '\0') {
      piVar1 = FUN_0043d880(piVar1,piVar2,param_5,0,(short *)0x0,'\x01');
      *param_2 = (int)piVar1;
      return 0;
    }
    piVar1 = FUN_0043da70(piVar1,piVar2,param_5,(short *)0x0,'\x01');
    *param_2 = (int)piVar1;
    return 0;
  }
  if ((*(uint *)((int)piVar1 + 0x1e) & 0x400) == 0) {
    return 0x90009;
  }
  if ((*(byte *)((int)piVar2 + 0x1e) & 1) == 0) {
    return 0x90009;
  }
  if (param_4 != '\0') {
    piVar1 = FUN_0043de50(piVar1,piVar2,param_5,0);
    *param_2 = (int)piVar1;
    return 0;
  }
  piVar1 = FUN_0043dc60(piVar1,piVar2,param_5);
  *param_2 = (int)piVar1;
  return 0;
}


