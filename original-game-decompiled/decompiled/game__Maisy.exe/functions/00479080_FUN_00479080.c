
/* ==== FUN_00479080 @ 00479080 ==== 
 * signature: bool __thiscall FUN_00479080(void * this, char * param_1)
 * body: 00479080-004790a3
 */

bool __thiscall FUN_00479080(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  
  (**(code **)(**(int **)((int)this + 4) + 0x70))(param_1);
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return iVar2 != -2;
}


