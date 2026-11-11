
/* ==== type_info::~type_info @ 0048e570 ==== 
 * signature: void __thiscall ~type_info(type_info * this)
 * body: 0048e570-0048e59e
 * note: Library Function - Single Match  public: virtual __thiscall type_info::~type_info(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Library: Visual Studio 1998 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__004cd724;
  __lock(0x1b);
  if (*(LPVOID *)(this + 4) != (LPVOID)0x0) {
    FUN_0048e750(*(LPVOID *)(this + 4));
  }
  FUN_00493e20(0x1b);
  return;
}


