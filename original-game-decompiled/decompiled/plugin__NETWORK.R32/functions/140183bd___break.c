
/* ==== __break @ 140183bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bd-140183bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


