
/* ==== FUN_0048a8e0 @ 0048a8e0 ==== 
 * signature: undefined4 __thiscall FUN_0048a8e0(void * this, int * param_1, undefined4 param_2, short * param_3, short * param_4)
 * body: 0048a8e0-0048aa67
 */

undefined4 __thiscall
FUN_0048a8e0(void *this,int *param_1,undefined4 param_2,short *param_3,short *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 local_58 [22];
  int local_42;
  short local_3c [22];
  int local_10;
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
  cVar1 = (**(code **)(*(int *)this + 0x100))(param_2,&local_8,local_58);
  if (cVar1 == '\0') {
    return 0x40001;
  }
  if (*(char *)((int)this + 0x60) == '\0') {
    local_42 = *(int *)((int)local_8 + 0x26);
  }
  if (local_42 < local_c) {
    return 0x40005;
  }
  iVar2 = 0;
  FUN_00430190((int)local_8);
  puVar3 = (undefined4 *)FUN_004301c0(local_8,local_c);
  if ((puVar3[1] & 4) == 0) {
    FUN_00455210(0xffffffff,param_4,s_Error__Write_Only_004dd054);
  }
  else if ((puVar3[1] & 8) == 0) {
    param_3[1] = 0;
    param_3[2] = 0;
    local_3c[0] = 0x6a;
    iVar2 = (**(code **)(*param_1 + 0x98))(*puVar3,param_3,local_3c);
    if (iVar2 == 0) {
      iVar2 = FUN_00455230(local_3c,param_4,0);
    }
    pcVar4 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_10);
    DAT_004e34cc = (*pcVar4)(local_10,0,local_3c);
  }
  else {
    FUN_00455210(0xffffffff,param_4,s_Error__Requires_Selector_004dd038);
  }
  if (iVar2 != 0) {
    FUN_00455210(0xffffffff,param_4,s_Error__General_Access_004dd020);
  }
  FUN_004301f0((int)local_8);
  return 0;
}


