
/* ==== FUN_12004450 @ 12004450 ==== 
 * signature: undefined __thiscall FUN_12004450(void * this, void * param_1)
 * body: 12004450-120044cf
 */

void __thiscall FUN_12004450(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char local_10;
  char local_f;
  undefined1 local_e;
  uint *local_c;
  uint local_8;
  int local_4;
  
  cVar1 = '\0';
  local_4 = 2;
  local_c = (uint *)((int)this + 8);
  do {
    local_8 = *local_c;
    if (local_8 != 0) {
      iVar2 = 0;
      uVar3 = 1;
      *local_c = 0;
      do {
        if ((local_8 & uVar3) != 0) {
          local_f = (char)iVar2 + cVar1;
          local_10 = *(char *)this + -0x70;
          local_e = 0;
          FUN_12016430(param_1,&local_10,3);
        }
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 * 2;
      } while (iVar2 < 0x20);
    }
    local_c = local_c + 1;
    cVar1 = cVar1 + ' ';
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  return;
}


