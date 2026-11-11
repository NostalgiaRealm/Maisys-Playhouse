
/* ==== FUN_0042d350 @ 0042d350 ==== 
 * signature: undefined __thiscall FUN_0042d350(void * this, int param_1)
 * body: 0042d350-0042d371
 */

void __thiscall FUN_0042d350(void *this,int param_1)

{
  short sVar1;
  
  *(int *)((int)this + 0x48) = param_1;
  sVar1 = FUN_0041f380(DAT_004da380,param_1);
  *(short *)((int)this + 0x46) = sVar1;
  return;
}


