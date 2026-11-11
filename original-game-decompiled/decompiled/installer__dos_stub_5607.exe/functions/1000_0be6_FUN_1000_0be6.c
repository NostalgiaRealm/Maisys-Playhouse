
/* ==== FUN_1000_0be6 @ 1000:0be6 ==== 
 * signature: undefined FUN_1000_0be6(void)
 * body: 1000:0be6-1000:0ccd
 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000_0be6(int param_1,undefined2 param_2,undefined2 param_3,uint param_4)

{
  code *pcVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  int unaff_DS;
  byte bVar5;
  
  if ((param_1 != 1) && (param_1 != 0)) {
    *(undefined2 *)0x7e = 0x16;
    FUN_1000_063f();
    return;
  }
  *(int *)0xdc = unaff_DS + (param_4 >> 4);
  *(undefined2 *)0xde = param_3;
  *(int *)0xe0 = unaff_DS;
  *(int *)0xe4 = unaff_DS;
  *(int *)0xe8 = unaff_DS;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (*(int *)0x15a == -0x292a) {
    (*(code *)*(undefined2 *)0x15c)();
  }
  DAT_1000_0bdc = (undefined2 *)&stack0xfffc;
  DAT_1000_0be0 = *(undefined2 *)0x2e;
  DAT_1000_0be2 = *(undefined2 *)0x30;
  bVar5 = 0;
  pcVar1 = (code *)swi(0x21);
  DAT_1000_0bde = unaff_SS;
  DAT_1000_0be4 = unaff_DS;
  (*pcVar1)();
  *(undefined2 *)0xaf = 1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = DAT_1000_0be4;
  uVar3 = DAT_1000_0bde;
  puVar2 = DAT_1000_0bdc;
  *(undefined2 *)0x30 = DAT_1000_0be2;
  *(undefined2 *)0x2e = DAT_1000_0be0;
  *(undefined2 *)0xaf = 0;
  if ((bVar5 & 1) == 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  FUN_1000_063f();
  return;
}


