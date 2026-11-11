
/* ==== FUN_0044ebb0 @ 0044ebb0 ==== 
 * signature: int * __thiscall FUN_0044ebb0(void * this, int param_1, undefined4 param_2, int * param_3)
 * body: 0044ebb0-0044ec26;0044ec3f-0044ec76;0044ec84-0044ecd8;0044ecf1-0044ed28;0044ed36-0044ed8a;0044eda3-0044edda;0044ede8-0044ee3c;0044ee55-0044ee8c;0044ee9a-0044eeee;0044ef07-0044ef42;0044ef50-0044efa4;0044efbd-0044eff4;0044f002-0044f056;0044f06f-0044f0a6;0044f0b4-0044f108;0044f121-0044f158;0044f166-0044f1ba;0044f1d3-0044f207;0044f21f-0044f256
 */

int * __thiscall FUN_0044ebb0(void *this,int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *this_00;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044f208;
  *unaff_FS_OFFSET = &local_10;
  this_00 = (int *)0x0;
  iVar1 = *param_3;
  if (iVar1 == 0xe) {
    this_00 = FUN_00412c20(0x160);
    local_8 = 0;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c4100;
    }
    local_8 = 0xffffffff;
    FUN_0041c880(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0xe);
  }
  else if (iVar1 == 0x11) {
    this_00 = FUN_00412c20(0x100);
    local_8 = 4;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c4938;
      *this_00 = (int)&PTR_FUN_004c3a70;
    }
    local_8 = 0xffffffff;
    FUN_00430e70(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x11);
  }
  else if (iVar1 == 0xf) {
    this_00 = FUN_00412c20(0x1e6);
    local_8 = 8;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c6748;
    }
    local_8 = 0xffffffff;
    FUN_004200d0(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0xf);
  }
  else if (iVar1 == 0x1f) {
    this_00 = FUN_00412c20(0x192);
    local_8 = 0xc;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c3c90;
    }
    local_8 = 0xffffffff;
    FUN_00448af0(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x1f);
  }
  else if (iVar1 == 0x1e) {
    this_00 = FUN_00412c20(0xcc);
    local_8 = 0x10;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c4b58;
      *this_00 = (int)&PTR_FUN_004c4338;
    }
    local_8 = 0xffffffff;
    FUN_00411b80(this_00,(int)this,0xffff,0);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x1e);
  }
  else if (iVar1 == 0x12) {
    this_00 = FUN_00412c20(0x106);
    local_8 = 0x14;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c4938;
      *this_00 = (int)&PTR_FUN_004c8570;
    }
    local_8 = 0xffffffff;
    FUN_00411050(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x12);
  }
  else if (iVar1 == 0x10) {
    this_00 = FUN_00412c20(0x168);
    local_8 = 0x18;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c3ec8;
    }
    local_8 = 0xffffffff;
    FUN_0044a010(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x10);
  }
  else if (iVar1 == 0x28) {
    this_00 = FUN_00412c20(0x16a);
    local_8 = 0x1c;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c78d0;
    }
    local_8 = 0xffffffff;
    FUN_00417b60(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x28);
  }
  else if (iVar1 == 0x24) {
    this_00 = FUN_00412c20(0x162);
    local_8 = 0x20;
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      FUN_00412c90(this_00,0);
      *this_00 = (int)&PTR_FUN_004c4528;
      *this_00 = (int)&PTR_FUN_004c3838;
      *this_00 = (int)&PTR_FUN_004c4700;
    }
    local_8 = 0xffffffff;
    FUN_00474f30(this_00,(int)this);
    (**(code **)(*this_00 + 0xbc))(param_1,param_2,param_3);
    (**(code **)(*this_00 + 0x174))(0x24);
  }
  if (this_00 != (int *)0x0) {
    if (*(short *)(param_1 + 0x16c) < 5) {
      FUN_0044e650(this,this_00);
    }
    (**(code **)(*this_00 + 0x1c))(0);
  }
  *unaff_FS_OFFSET = local_10;
  return this_00;
}


