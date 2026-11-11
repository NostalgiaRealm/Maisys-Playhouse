
/* ==== FUN_00449b40 @ 00449b40 ==== 
 * signature: undefined __thiscall FUN_00449b40(void * this, uint param_1)
 * body: 00449b40-00449ba9
 */

void __thiscall FUN_00449b40(void *this,uint param_1)

{
  uint *puVar1;
  HGLOBAL pvVar2;
  uint local_c;
  uint local_8;
  
  puVar1 = (uint *)((int)this + 0x186);
  FUN_00449260(this);
  (**(code **)(*(int *)this + 0x1c))(1);
  FUN_00411f80(*(HGLOBAL *)((int)this + 0x152),param_1,&local_8,&local_c,*puVar1);
  pvVar2 = FUN_00412150(*(HGLOBAL *)((int)this + 0x152),local_8,local_c,&DAT_004d99e4,*puVar1,puVar1
                       );
  *(HGLOBAL *)((int)this + 0x152) = pvVar2;
  return;
}


