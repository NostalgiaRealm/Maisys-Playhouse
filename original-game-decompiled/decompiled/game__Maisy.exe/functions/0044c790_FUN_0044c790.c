
/* ==== FUN_0044c790 @ 0044c790 ==== 
 * signature: undefined __thiscall FUN_0044c790(void * this, int param_1, int param_2)
 * body: 0044c790-0044c7db
 */

void __thiscall FUN_0044c790(void *this,int param_1,int param_2)

{
  longlong lVar1;
  
  *(int *)((int)this + 0x9c) = param_1;
  *(int *)((int)this + 0xa0) = param_2 + param_1;
  lVar1 = FUN_0044c670(this,'\0');
  if ((param_1 <= (int)lVar1) &&
     (lVar1 = FUN_0044c670(this,'\0'), (int)lVar1 <= *(int *)((int)this + 0xa0))) {
    return;
  }
  FUN_0044c630(this,*(LPARAM *)((int)this + 0x9c));
  return;
}


