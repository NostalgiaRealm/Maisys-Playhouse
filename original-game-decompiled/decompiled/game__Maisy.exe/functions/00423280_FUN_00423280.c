
/* ==== FUN_00423280 @ 00423280 ==== 
 * signature: undefined __thiscall FUN_00423280(void * this, int param_1)
 * body: 00423280-004232df
 */

void __thiscall FUN_00423280(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18 [5];
  
  puVar1 = (undefined4 *)FUN_004301c0(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = FUN_00430370(this,param_1,local_18);
    if ((char)uVar2 != '\0') {
      puVar1 = local_18;
    }
    if (puVar1 == (undefined4 *)0x0) goto LAB_004232cf;
  }
  FUN_0043ba20((LPVOID)*puVar1);
  if ((puVar1[1] == 1) && ((undefined4 *)puVar1[3] != (undefined4 *)0x0)) {
    (*(code *)**(undefined4 **)puVar1[3])(1);
  }
LAB_004232cf:
  FUN_004303c0();
  return;
}


