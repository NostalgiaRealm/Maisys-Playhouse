
/* ==== FUN_0048a580 @ 0048a580 ==== 
 * signature: undefined4 __thiscall FUN_0048a580(void * this, undefined4 param_1, short * param_2, short * param_3)
 * body: 0048a580-0048a66a
 */

undefined4 __thiscall FUN_0048a580(void *this,undefined4 param_1,short *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  char local_128 [256];
  undefined1 local_28 [22];
  int local_12;
  int local_c;
  void *local_8;
  
  if ((param_2 == (short *)0x0) || (iVar2 = FUN_00455c10(param_2,&local_c,(int *)0x0), iVar2 != 0))
  {
    return 0x40004;
  }
  local_8 = (void *)0x0;
  if (local_c < 1) {
    return 0x40005;
  }
  cVar1 = (**(code **)(*(int *)this + 0x100))(param_1,&local_8,local_28);
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
  iVar2 = FUN_004301c0(local_8,local_c);
  FUN_0048ae90(local_128,*(int *)(iVar2 + 4) >> 0x10);
  FUN_00455210(0,param_3,local_128);
  FUN_004301f0((int)local_8);
  return 0;
}


