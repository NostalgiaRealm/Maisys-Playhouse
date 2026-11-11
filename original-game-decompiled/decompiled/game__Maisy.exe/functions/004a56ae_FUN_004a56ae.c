
/* ==== FUN_004a56ae @ 004a56ae ==== 
 * signature: undefined __thiscall FUN_004a56ae(void * this, int param_1)
 * body: 004a56ae-004a56e3
 */

void __thiscall FUN_004a56ae(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    FUN_004a564c(this,*puVar1);
  }
  return;
}


