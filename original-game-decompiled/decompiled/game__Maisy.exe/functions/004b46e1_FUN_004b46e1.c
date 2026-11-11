
/* ==== FUN_004b46e1 @ 004b46e1 ==== 
 * signature: undefined4 __thiscall FUN_004b46e1(void * this, int param_1)
 * body: 004b46e1-004b4717
 */

undefined4 __thiscall FUN_004b46e1(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x80))
                    (*(undefined4 *)
                      (*(int *)(*(int *)((int)this + 0xa0) + 8) + (param_1 + -0xe110) * 4));
  if (iVar1 == 0) {
    (**(code **)**(undefined4 **)((int)this + 0xa0))(param_1 + -0xe110);
  }
  return 1;
}


