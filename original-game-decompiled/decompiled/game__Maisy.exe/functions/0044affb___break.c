
/* ==== __break @ 0044affb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044affb-0044affb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


