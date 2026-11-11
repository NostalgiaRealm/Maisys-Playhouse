
/* ==== FUN_004200d0 @ 004200d0 ==== 
 * signature: undefined __thiscall FUN_004200d0(void * this, int param_1)
 * body: 004200d0-00420232
 */

void __thiscall FUN_004200d0(void *this,int param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00420233;
  *unaff_FS_OFFSET = &local_10;
  FUN_0041d270(this,param_1);
  *(uint *)((int)this + 0x1e) = *(uint *)((int)this + 0x1e) | 0x2000;
  *(undefined2 *)((int)this + 0x22) = 0x10;
  *(undefined4 *)((int)this + 0x1ca) = 0;
  *(undefined4 *)((int)this + 0x1ce) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1c2) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x152) = 0;
  *(undefined4 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x15a) = 0;
  *(undefined4 *)((int)this + 0x15e) = 0;
  *(undefined4 *)((int)this + 0x162) = 0;
  *(undefined4 *)((int)this + 0x166) = 0;
  *(undefined4 *)((int)this + 0x16a) = 0;
  *(undefined2 *)((int)this + 0x42) = 9;
  *(undefined2 *)((int)this + 0x44) = 4;
  *(undefined2 *)((int)this + 0x1a6) = 0xffff;
  *(undefined2 *)((int)this + 0x16e) = 0;
  *(undefined4 *)((int)this + 0x178) = 0xf;
  *(undefined2 *)((int)this + 0x170) = 0;
  *(undefined2 *)((int)this + 0x172) = 0;
  *(undefined4 *)((int)this + 0x17e) = 0x480000;
  *(undefined2 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x182) = 0x480000;
  *(undefined2 *)((int)this + 0x176) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined2 *)((int)this + 0x186) = 0;
  *(undefined2 *)((int)this + 0x192) = 0;
  *(undefined2 *)((int)this + 400) = 0;
  this_00 = FUN_00412c20(0x4a);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1 = FUN_0042f970(this_00,0xc,0,'\0',0,'\0');
  }
  *(undefined4 **)((int)this + 0x1d2) = puVar1;
  *(undefined4 *)((int)this + 0x1d6) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1da) = 0xffffffff;
  *(undefined1 *)((int)this + 0x1df) = 0;
  *(undefined1 *)((int)this + 0x1de) = 0;
  *(undefined4 *)((int)this + 0x1e2) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}


