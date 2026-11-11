
/* ==== __break @ 0049adde ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adde-0049adde
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


