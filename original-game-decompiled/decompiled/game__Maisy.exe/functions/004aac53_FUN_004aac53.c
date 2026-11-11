
/* ==== FUN_004aac53 @ 004aac53 ==== 
 * signature: undefined __thiscall FUN_004aac53(void * this, undefined4 param_1)
 * body: 004aac53-004aac75
 */

void __thiscall FUN_004aac53(void *this,undefined4 param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = AfxGetThreadState();
  (**(code **)(*(int *)this + 0xac))
            (*(undefined4 *)(p_Var1 + 0x3c),*(undefined4 *)(p_Var1 + 0x40),
             *(undefined4 *)(p_Var1 + 0x44),param_1);
  return;
}


