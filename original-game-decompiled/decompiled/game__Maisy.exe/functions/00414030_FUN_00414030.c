
/* ==== FUN_00414030 @ 00414030 ==== 
 * signature: char __thiscall FUN_00414030(void * this, short param_1)
 * body: 00414030-00414098
 */

char __thiscall FUN_00414030(void *this,short param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *local_c;
  int local_8;
  
  cVar1 = '\0';
  if ((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 0x26) != 0)) {
    iVar2 = 1;
    local_8 = *(int *)(*(int *)((int)this + 8) + 0x26);
    if (0 < local_8) {
      do {
        if (cVar1 != '\0') {
          return cVar1;
        }
        FUN_00430370(*(void **)((int)this + 4),iVar2,&local_c);
        if (*(short *)*local_c == param_1) {
          cVar1 = '\x01';
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= local_8);
    }
    return cVar1;
  }
  return '\0';
}


