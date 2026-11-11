
/* ==== FUN_0042d490 @ 0042d490 ==== 
 * signature: undefined __thiscall FUN_0042d490(void * this, int param_1)
 * body: 0042d490-0042d513
 */

void __thiscall FUN_0042d490(void *this,int param_1)

{
  undefined4 local_8;
  
  if (param_1 != *(int *)((int)this + 0x3a)) {
    if ((*(int *)((int)this + 0x3a) != 0) && (*(int *)((int)this + 0x4c) != 0)) {
      local_8 = 0;
      FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(int *)((int)this + 0x4c),8,&local_8
                   ,4);
    }
    FUN_00412550(this,param_1);
    if ((param_1 != 0) && (*(int *)((int)this + 0x4c) != 0)) {
      *(int *)(*(int *)((int)this + 0x4c) + 4) = param_1;
      local_8 = 1;
      FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),8,
                   &local_8,4);
    }
  }
  return;
}


