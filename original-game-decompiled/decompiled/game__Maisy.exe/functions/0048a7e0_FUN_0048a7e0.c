
/* ==== FUN_0048a7e0 @ 0048a7e0 ==== 
 * signature: undefined4 __thiscall FUN_0048a7e0(void * this, int * param_1, undefined4 param_2, short * param_3, undefined4 param_4)
 * body: 0048a7e0-0048a8d7
 */

undefined4 __thiscall
FUN_0048a7e0(void *this,int *param_1,undefined4 param_2,short *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_28 [22];
  int local_12;
  int local_c;
  void *local_8;
  
  if ((param_3 == (short *)0x0) || (iVar2 = FUN_00455c10(param_3,&local_c,(int *)0x0), iVar2 != 0))
  {
    return 0x40004;
  }
  local_8 = (void *)0x0;
  if (local_c < 1) {
    return 0x40005;
  }
  cVar1 = (**(code **)(*(int *)this + 0x100))(param_2,&local_8,local_28);
  if (cVar1 == '\0') {
    return 0x40001;
  }
  if (*(char *)((int)this + 0x60) == '\0') {
    local_12 = *(int *)((int)local_8 + 0x26);
  }
  if (local_12 < local_c) {
    return 0x40005;
  }
  FUN_00430190((int)local_8);
  puVar3 = (undefined4 *)FUN_004301c0(local_8,local_c);
  *param_3 = 0;
  if ((puVar3[1] & 4) == 0) {
    uVar4 = 0x10000;
  }
  else if ((puVar3[1] & 8) == 0) {
    uVar4 = (**(code **)(*param_1 + 0x98))(*puVar3,param_3,param_4);
  }
  else {
    uVar4 = 0x10000;
  }
  FUN_004301f0((int)local_8);
  return uVar4;
}


