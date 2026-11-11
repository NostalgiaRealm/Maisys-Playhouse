
/* ==== FUN_0042c450 @ 0042c450 ==== 
 * signature: undefined __thiscall FUN_0042c450(void * this, int param_1)
 * body: 0042c450-0042c4a6
 */

void __thiscall FUN_0042c450(void *this,int param_1)

{
  undefined4 local_8;
  
  if ((((*(int *)((int)this + 4) != 0) && (param_1 != *(int *)((int)this + 4))) &&
      (*(int *)((int)this + 0x3a) != 0)) && (*(int *)((int)this + 0x4c) != 0)) {
    local_8 = 0;
    FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(int *)((int)this + 0x4c),8,&local_8,4
                );
  }
  FUN_00412f40(this,param_1);
  return;
}


