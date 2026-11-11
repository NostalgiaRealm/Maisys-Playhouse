
/* ==== FUN_1200441d @ 1200441d ==== 
 * signature: undefined __thiscall FUN_1200441d(void * this, void * param_1)
 * body: 1200441d-1200442b
 */

void __thiscall FUN_1200441d(void *this,void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cStack_10;
  char cStack_f;
  undefined1 uStack_e;
  uint *puStack_c;
  uint uStack_8;
  int iStack_4;
  
  cVar1 = '\0';
  iStack_4 = 2;
  puStack_c = (uint *)((int)this + 8);
  do {
    uStack_8 = *puStack_c;
    if (uStack_8 != 0) {
      iVar2 = 0;
      uVar3 = 1;
      *puStack_c = 0;
      do {
        if ((uStack_8 & uVar3) != 0) {
          cStack_f = (char)iVar2 + cVar1;
          cStack_10 = *(char *)this + -0x70;
          uStack_e = 0;
          FUN_12016430(param_1,&cStack_10,3);
        }
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 * 2;
      } while (iVar2 < 0x20);
    }
    puStack_c = puStack_c + 1;
    cVar1 = cVar1 + ' ';
    iStack_4 = iStack_4 + -1;
  } while (-1 < iStack_4);
  return;
}


