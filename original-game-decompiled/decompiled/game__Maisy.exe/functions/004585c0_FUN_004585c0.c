
/* ==== FUN_004585c0 @ 004585c0 ==== 
 * signature: undefined __thiscall FUN_004585c0(void * this, undefined4 param_1, undefined1 param_2)
 * body: 004585c0-00458822
 */

void __thiscall FUN_004585c0(void *this,undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00458864;
  *unaff_FS_OFFSET = &local_10;
  FUN_00459da0((int)this);
  *(undefined2 *)((int)this + 0x60) = 0x32;
  *(undefined2 *)((int)this + 0x58) = *(undefined2 *)((int)this + 0xb2);
  *(undefined2 *)((int)this + 0x5c) = *(undefined2 *)((int)this + 0xae);
  *(undefined2 *)((int)this + 0x56) = *(undefined2 *)((int)this + 0xb0);
  *(undefined2 *)((int)this + 0x5a) = *(undefined2 *)((int)this + 0xac);
  *(undefined1 *)((int)this + 0x88) = param_2;
  *(undefined1 *)((int)this + 0x89) = param_2;
  FUN_00466640(this);
  *(undefined2 *)((int)this + 0x22) = 1;
  puVar1 = FUN_00412c20(0x5e);
  local_8 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00478350(puVar1,(int)this);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x48) = puVar2;
  *(undefined1 *)((int)this + 0x86) = 1;
  *(undefined1 *)((int)this + 0x87) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  *(undefined2 *)((int)this + 0x5e) = 8;
  puVar1 = FUN_00412c20(0x3c);
  local_8 = 1;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00447fc0(puVar1,(int)this);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x6e) = puVar2;
  piVar3 = FUN_0041bd90(0x20,0xffffffff,0);
  *(int **)((int)this + 0x66) = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x38))(this);
  }
  *(undefined4 *)((int)this + 0x6a) = param_1;
  puVar2 = (undefined4 *)FUN_004a5fed(0xe);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_004be070;
    puVar1 = puVar2;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x7e) = puVar1;
  FUN_00430500(puVar1,0);
  *(undefined4 *)((int)this + 0x82) = 0;
  *(undefined1 *)((int)this + 0x8a) = 0;
  puVar2 = (undefined4 *)FUN_004a5fed(0xe);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_004be070;
    puVar1 = puVar2;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x72) = puVar1;
  FUN_00430500(puVar1,0);
  puVar2 = (undefined4 *)FUN_004a5fed(0xe);
  puVar1 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_004be070;
    puVar1 = puVar2;
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x76) = puVar1;
  FUN_00430500(puVar1,0);
  *(undefined2 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x92) = 0;
  *(undefined4 *)((int)this + 0x9a) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0xa2) = 0;
  *(undefined2 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xba) = 0;
  *(undefined2 *)((int)this + 0xb6) = 0;
  *(undefined2 *)((int)this + 0xb8) = 3;
  *(undefined1 *)((int)this + 0xbb) = 0;
  FUN_0046e880(DAT_004dc564,this);
  puVar1 = FUN_00412c20(0x4a);
  local_8 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042f970(puVar1,8,0,'\0',0,'\0');
  }
  *(undefined4 **)((int)this + 0xbe) = puVar1;
  *unaff_FS_OFFSET = local_10;
  return;
}


