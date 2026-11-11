
/* ==== FUN_0042cd30 @ 0042cd30 ==== 
 * signature: undefined __thiscall FUN_0042cd30(void * this, uint * param_1)
 * body: 0042cd30-0042cdc9
 */

void __thiscall FUN_0042cd30(void *this,uint *param_1)

{
  uint local_58 [3];
  uint local_4c;
  uint local_48;
  undefined2 local_44;
  undefined2 local_34 [22];
  char local_7;
  
  if (param_1[1] == 0xaaaa5555) {
    local_7 = (**(code **)(*(int *)this + 600))(0x1b2,param_1,0x52);
  }
  else if (param_1[1] == 0xaa55a5a5) {
    local_58[0] = *param_1;
    local_4c = param_1[3];
    local_48 = param_1[4];
    local_58[1] = 0xaaaa5555;
    local_58[2] = param_1[2];
    local_44 = 0;
    FUN_004166b0((short *)((int)param_1 + 0x26),local_34);
    local_7 = (**(code **)(*(int *)this + 600))(0x1b2,local_58,0x52);
  }
  if ((local_7 != '\0') && ((*param_1 & 0x20000000) != 0)) {
    *param_1 = *param_1 | 0x10000000;
  }
  return;
}


