
/* ==== FUN_004b4645 @ 004b4645 ==== 
 * signature: undefined __thiscall FUN_004b4645(void * this, char * param_1)
 * body: 004b4645-004b467f
 */

void __thiscall FUN_004b4645(void *this,char *param_1)

{
  char local_104 [260];
  
  if (*(int *)((int)this + 0xa0) != 0) {
    AfxFullPath(local_104,param_1);
    (**(code **)(**(int **)((int)this + 0xa0) + 4))(param_1);
  }
  return;
}


