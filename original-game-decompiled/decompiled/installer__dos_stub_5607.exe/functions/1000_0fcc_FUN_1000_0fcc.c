
/* ==== FUN_1000_0fcc @ 1000:0fcc ==== 
 * signature: undefined __cdecl16near FUN_1000_0fcc(void)
 * body: 1000:0fcc-1000:103c;1000:103e-1000:1056
 */

uint __cdecl16near FUN_1000_0fcc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_c [3];
  undefined2 local_6;
  undefined2 local_4;
  
  local_c[0] = FUN_1000_0848(0x130);
  if (param_1 == 0) {
    iVar1 = FUN_1000_106c(local_c[0],0);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    local_c[1] = 0x138;
    local_c[2] = param_1;
    local_6 = 0;
    if ((local_c[0] == 0) ||
       ((uVar2 = FUN_1000_0d54(0,local_c[0],local_c,*(undefined2 *)0xa8), uVar2 == 0xffff &&
        ((local_4 = 0xffff, *(int *)0x7e == 2 || (*(int *)0x7e == 0xd)))))) {
      local_c[0] = 0x13b;
      uVar2 = FUN_1000_0e8a(0,0x13b,local_c,*(undefined2 *)0xa8);
    }
  }
  return uVar2;
}


