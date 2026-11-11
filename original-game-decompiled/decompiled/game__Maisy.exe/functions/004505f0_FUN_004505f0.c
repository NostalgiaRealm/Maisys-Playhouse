
/* ==== FUN_004505f0 @ 004505f0 ==== 
 * signature: int * __thiscall FUN_004505f0(void * this, short param_1, char param_2)
 * body: 004505f0-00450681
 */

int * __thiscall FUN_004505f0(void *this,short param_1,char param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  
  piVar2 = (int *)0x0;
  uVar1 = FUN_00430370(*(void **)((int)this + 0x26),(int)param_1,&local_14);
  piVar3 = piVar2;
  if (((((char)uVar1 != '\0') && (local_14 != (int *)0x0)) && (local_c != (undefined4 *)0x0)) &&
     (*(short *)(local_c + 3) == 0)) {
    if ((*(byte *)(local_14 + 8) & 8) != 0) {
      (**(code **)(*local_14 + 0x2a0))();
    }
    piVar3 = local_14;
    if (param_2 != '\0') {
      (**(code **)(*local_14 + 8))(1,0);
      FUN_00430540(local_c);
      local_c = (undefined4 *)0x0;
      piVar3 = piVar2;
    }
    local_14 = (int *)0x0;
    local_10 = 0;
    FUN_0042ff10(*(void **)((int)this + 0x26),(int)param_1,&local_14);
  }
  return piVar3;
}


