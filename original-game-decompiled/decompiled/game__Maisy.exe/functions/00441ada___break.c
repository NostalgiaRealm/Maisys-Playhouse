
/* ==== __break @ 00441ada ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441ada-00441ada
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


