
/* ==== FUN_00426760 @ 00426760 ==== 
 * signature: undefined __thiscall FUN_00426760(void * this, char param_1)
 * body: 00426760-0042679d
 */

void __thiscall FUN_00426760(void *this,char param_1)

{
  if ((char)('\x01' - ((*(uint *)((int)this + 0x26) & 0x1000000) == 0)) != param_1) {
    if (param_1 == '\0') {
      FUN_0044bbb0(*(void **)((int)this + 0x5a));
    }
    else {
      FUN_0044bb70(*(void **)((int)this + 0x5a));
    }
  }
  FUN_0044f650(this,param_1);
  return;
}


