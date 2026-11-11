
/* ==== FUN_00449c00 @ 00449c00 ==== 
 * signature: undefined __thiscall FUN_00449c00(void * this, char param_1)
 * body: 00449c00-00449c31
 */

void __thiscall FUN_00449c00(void *this,char param_1)

{
  *(byte *)((int)this + 0x10) =
       (param_1 * '\x02' ^ *(byte *)((int)this + 0x10)) & 2 ^ *(byte *)((int)this + 0x10);
  if ((param_1 != '\0') && (*(int **)((int)this + 4) != (int *)0x0)) {
    (**(code **)(**(int **)((int)this + 4) + 0x1c))(1);
  }
  return;
}


