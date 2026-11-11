
/* ==== __break @ 00407719 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00407719-00407719
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


